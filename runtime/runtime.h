#ifndef RUNTIME_H
#define RUNTIME_H

#include <stdint.h>

// ============================================================================
// Platform Detection
// ============================================================================

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#define EXPORT EMSCRIPTEN_KEEPALIVE
#else
#define EXPORT
#define EMSCRIPTEN_KEEPALIVE
#endif

// ============================================================================
// Graphics API (OpenGL ES 2.0 subset)
// ============================================================================

// Screen dimensions
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

// Initialize graphics subsystem
void gfx_init(void);

// Clear the screen with a color (RGBA, 0-255 each)
void gfx_clear(int r, int g, int b, int a);

// Draw a filled rectangle
void gfx_rect(int x, int y, int w, int h, int r, int g, int b, int a);

// Draw a character (ASCII) at position
void gfx_char(int x, int y, char c, int r, int g, int b);

// Draw a string at position
void gfx_text(int x, int y, const char *text, int r, int g, int b);

// Present the frame (swap buffers)
void gfx_present(void);

// ============================================================================
// Input API
// ============================================================================

// Key codes (subset)
#define KEY_LEFT  0
#define KEY_RIGHT 1
#define KEY_UP    2
#define KEY_DOWN  3
#define KEY_SPACE 4
#define KEY_ENTER 5

// Check if a key is currently pressed
int input_key_pressed(int key);

// Get last pressed key (for text input), or -1 if none
int input_last_key(void);

// ============================================================================
// Random Number Generation
// ============================================================================

// Seed the RNG
void rng_seed(uint32_t seed);

// Get a random integer in [0, max)
int rng_int(int max);

// ============================================================================
// Timing
// ============================================================================

// Get current time in milliseconds
uint32_t time_now(void);

// ============================================================================
// Console / Debug
// ============================================================================

// Print to console (works in browser dev tools)
void console_log(const char *msg);
void console_log_int(int value);

// ============================================================================
// Object/Struct API (simple string->int hashmap)
// ============================================================================

#define DS_OBJECT_MAX_FIELDS 32
#define DS_OBJECT_KEY_SIZE 32

typedef struct {
    char keys[DS_OBJECT_MAX_FIELDS][DS_OBJECT_KEY_SIZE];
    int values[DS_OBJECT_MAX_FIELDS];
    int count;
} DSObject;

// Create an object with initial fields (variadic: count, then key1, val1, key2, val2, ...)
DSObject ds_object_create(int count, ...);

// Get a field value (returns 0 if not found)
int ds_object_get(DSObject obj, const char *key);

// Set a field value
void ds_object_set(DSObject *obj, const char *key, int value);

// ============================================================================
// Game Loop Exports (called from JS)
// ============================================================================

// These are implemented by the compiled game code
EXPORT void game_init(void);
EXPORT void game_update(int dt);  // dt in milliseconds
EXPORT void game_render(void);

// Input callbacks (called from JS)
EXPORT void on_key_down(int key);
EXPORT void on_key_up(int key);

#endif // RUNTIME_H

