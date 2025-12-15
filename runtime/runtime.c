#include "runtime.h"
#include <stdio.h>
#include <string.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
// Using software framebuffer, no GL needed
#endif

// ============================================================================
// Internal State
// ============================================================================

static uint32_t rng_state = 12345;
static int key_states[6] = {0};
static int last_key = -1;

// Simple framebuffer for software rendering (for demo)
// In production, you'd use actual GL calls
static uint32_t framebuffer[SCREEN_WIDTH * SCREEN_HEIGHT];

// ============================================================================
// Graphics Implementation
// ============================================================================

void gfx_init(void) {
    memset(framebuffer, 0, sizeof(framebuffer));
    console_log("Graphics initialized");
}

void gfx_clear(int r, int g, int b, int a) {
    uint32_t color = ((uint32_t)a << 24) | ((uint32_t)b << 16) | ((uint32_t)g << 8) | (uint32_t)r;
    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
        framebuffer[i] = color;
    }
}

void gfx_rect(int x, int y, int w, int h, int r, int g, int b, int a) {
    uint32_t color = ((uint32_t)a << 24) | ((uint32_t)b << 16) | ((uint32_t)g << 8) | (uint32_t)r;
    
    for (int py = y; py < y + h && py < SCREEN_HEIGHT; py++) {
        if (py < 0) continue;
        for (int px = x; px < x + w && px < SCREEN_WIDTH; px++) {
            if (px < 0) continue;
            framebuffer[py * SCREEN_WIDTH + px] = color;
        }
    }
}

// Simple 8x8 font (just a few characters for demo)
static const unsigned char font_data[128][8] = {
    // We'll just define a simple '@' character and space for demo
    // In real implementation, you'd have a full font
    ['@'] = {0x3C, 0x42, 0x5A, 0x5A, 0x5C, 0x40, 0x3E, 0x00},
    ['#'] = {0x24, 0x7E, 0x24, 0x24, 0x7E, 0x24, 0x00, 0x00},
    ['.'] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00},
    ['D'] = {0x78, 0x44, 0x42, 0x42, 0x42, 0x44, 0x78, 0x00},
    ['S'] = {0x3C, 0x42, 0x40, 0x3C, 0x02, 0x42, 0x3C, 0x00},
};

void gfx_char(int x, int y, char c, int r, int g, int b) {
    if (c < 0 || c > 127) return;
    
    uint32_t color = (255 << 24) | ((uint32_t)b << 16) | ((uint32_t)g << 8) | (uint32_t)r;
    
    for (int row = 0; row < 8; row++) {
        unsigned char bits = font_data[(int)c][row];
        for (int col = 0; col < 8; col++) {
            if (bits & (0x80 >> col)) {
                int px = x + col;
                int py = y + row;
                if (px >= 0 && px < SCREEN_WIDTH && py >= 0 && py < SCREEN_HEIGHT) {
                    framebuffer[py * SCREEN_WIDTH + px] = color;
                }
            }
        }
    }
}

void gfx_text(int x, int y, const char *text, int r, int g, int b) {
    int cx = x;
    while (*text) {
        gfx_char(cx, y, *text, r, g, b);
        cx += 8;
        text++;
    }
}

void gfx_present(void) {
    // In Emscripten, this is handled by the GL context
    // For software rendering, we'd copy framebuffer to canvas here
}

// ============================================================================
// Input Implementation
// ============================================================================

int input_key_pressed(int key) {
    if (key < 0 || key > 5) return 0;
    return key_states[key];
}

int input_last_key(void) {
    int k = last_key;
    last_key = -1;
    return k;
}

EXPORT void on_key_down(int key) {
    if (key >= 0 && key <= 5) {
        key_states[key] = 1;
        last_key = key;
    }
}

EXPORT void on_key_up(int key) {
    if (key >= 0 && key <= 5) {
        key_states[key] = 0;
    }
}

// ============================================================================
// RNG Implementation
// ============================================================================

void rng_seed(uint32_t seed) {
    rng_state = seed;
}

int rng_int(int max) {
    if (max <= 0) return 0;
    // Simple xorshift
    rng_state ^= rng_state << 13;
    rng_state ^= rng_state >> 17;
    rng_state ^= rng_state << 5;
    return (int)(rng_state % (uint32_t)max);
}

// ============================================================================
// Timing Implementation
// ============================================================================

uint32_t time_now(void) {
#ifdef __EMSCRIPTEN__
    return (uint32_t)emscripten_get_now();
#else
    return 0; // Stub
#endif
}

// ============================================================================
// Console Implementation
// ============================================================================

void console_log(const char *msg) {
#ifdef __EMSCRIPTEN__
    EM_ASM({
        console.log(UTF8ToString($0));
    }, msg);
#else
    printf("%s\n", msg);
#endif
}

void console_log_int(int value) {
#ifdef __EMSCRIPTEN__
    EM_ASM({
        console.log($0);
    }, value);
#else
    printf("%d\n", value);
#endif
}

// ============================================================================
// Get framebuffer for JS (for Canvas2D path)
// ============================================================================

EXPORT uint32_t* get_framebuffer(void) {
    return framebuffer;
}

EXPORT int get_screen_width(void) {
    return SCREEN_WIDTH;
}

EXPORT int get_screen_height(void) {
    return SCREEN_HEIGHT;
}

// ============================================================================
// Object/Struct Implementation
// ============================================================================

#include <stdarg.h>

DSObject ds_object_create(int count, ...) {
    DSObject obj = {0};
    obj.count = 0;
    
    va_list args;
    va_start(args, count);
    
    for (int i = 0; i < count && i < DS_OBJECT_MAX_FIELDS; i++) {
        const char *key = va_arg(args, const char *);
        int value = va_arg(args, int);
        
        strncpy(obj.keys[obj.count], key, DS_OBJECT_KEY_SIZE - 1);
        obj.keys[obj.count][DS_OBJECT_KEY_SIZE - 1] = '\0';
        obj.values[obj.count] = value;
        obj.count++;
    }
    
    va_end(args);
    return obj;
}

int ds_object_get(DSObject obj, const char *key) {
    for (int i = 0; i < obj.count; i++) {
        if (strcmp(obj.keys[i], key) == 0) {
            return obj.values[i];
        }
    }
    return 0;  // Default value if not found
}

void ds_object_set(DSObject *obj, const char *key, int value) {
    // Check if key exists
    for (int i = 0; i < obj->count; i++) {
        if (strcmp(obj->keys[i], key) == 0) {
            obj->values[i] = value;
            return;
        }
    }
    
    // Add new key if space available
    if (obj->count < DS_OBJECT_MAX_FIELDS) {
        strncpy(obj->keys[obj->count], key, DS_OBJECT_KEY_SIZE - 1);
        obj->keys[obj->count][DS_OBJECT_KEY_SIZE - 1] = '\0';
        obj->values[obj->count] = value;
        obj->count++;
    }
}

