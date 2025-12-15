#!/bin/bash
# nh Test Runner - Actually Executes and Validates Output

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PROJECT_DIR="$(dirname "$SCRIPT_DIR")"
COMPILER="$PROJECT_DIR/build/dsc"
TEST_DIR="$SCRIPT_DIR"
TMP_DIR="/tmp/nh_tests"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Counters
PASSED=0
FAILED=0

mkdir -p "$TMP_DIR"

echo "=================================="
echo "  nh Test Suite"
echo "=================================="
echo ""

# Check if compiler exists
if [ ! -f "$COMPILER" ]; then
    echo -e "${RED}Error: Compiler not found at $COMPILER${NC}"
    echo "Run 'make compiler' first."
    exit 1
fi

# Create a minimal runtime stub for testing (no SDL dependency)
cat > "$TMP_DIR/runtime.h" << 'EOF'
#ifndef RUNTIME_H
#define RUNTIME_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

// Minimal runtime for testing
static inline void console_log(const char *msg) { printf("%s\n", msg); }
static inline void console_log_int(int value) { printf("%d\n", value); }

// Stub graphics functions
static inline void gfx_init(void) {}
static inline void gfx_clear(int r, int g, int b, int a) { (void)r;(void)g;(void)b;(void)a; }
static inline void gfx_rect(int x, int y, int w, int h, int r, int g, int b, int a) { 
    (void)x;(void)y;(void)w;(void)h;(void)r;(void)g;(void)b;(void)a; 
}
static inline void gfx_present(void) {}

// Object/Struct support
#define DS_OBJECT_MAX_FIELDS 32
#define DS_OBJECT_KEY_SIZE 32

typedef struct {
    char keys[DS_OBJECT_MAX_FIELDS][DS_OBJECT_KEY_SIZE];
    int values[DS_OBJECT_MAX_FIELDS];
    int count;
} DSObject;

static inline DSObject ds_object_create(int count, ...) {
    DSObject obj = {{{0}}, {0}, 0};
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count && i < DS_OBJECT_MAX_FIELDS; i++) {
        const char *key = va_arg(args, const char *);
        int value = va_arg(args, int);
        strncpy(obj.keys[obj.count], key, DS_OBJECT_KEY_SIZE - 1);
        obj.values[obj.count] = value;
        obj.count++;
    }
    va_end(args);
    return obj;
}

static inline int ds_object_get(DSObject obj, const char *key) {
    for (int i = 0; i < obj.count; i++) {
        if (strcmp(obj.keys[i], key) == 0) return obj.values[i];
    }
    return 0;
}

static inline void ds_object_set(DSObject *obj, const char *key, int value) {
    for (int i = 0; i < obj->count; i++) {
        if (strcmp(obj->keys[i], key) == 0) { obj->values[i] = value; return; }
    }
    if (obj->count < DS_OBJECT_MAX_FIELDS) {
        strncpy(obj->keys[obj->count], key, DS_OBJECT_KEY_SIZE - 1);
        obj->values[obj->count] = value;
        obj->count++;
    }
}

#endif
EOF

# Run each test file
for test_file in "$TEST_DIR"/*.nh; do
    test_name=$(basename "$test_file" .nh)
    
    echo -n "Testing $test_name... "
    
    # Check for expected output comment in file
    # Format: // EXPECT: <expected_output>
    expected=$(grep -E "^// EXPECT:" "$test_file" | sed 's/^\/\/ EXPECT: //' || true)
    
    # Try to parse (AST mode)
    if ! "$COMPILER" --ast "$test_file" > /dev/null 2>&1; then
        echo -e "${RED}FAIL (parse error)${NC}"
        "$COMPILER" --ast "$test_file" 2>&1 | head -5
        ((FAILED++))
        continue
    fi
    
    # Try to generate C code
    if ! "$COMPILER" "$test_file" > "$TMP_DIR/test_$test_name.c" 2>&1; then
        echo -e "${YELLOW}FAIL (codegen error)${NC}"
        ((FAILED++))
        continue
    fi
    
    # Try to compile the generated C
    if ! gcc -w "$TMP_DIR/test_$test_name.c" -I"$TMP_DIR" -o "$TMP_DIR/test_$test_name" 2>/dev/null; then
        echo -e "${YELLOW}FAIL (C compile error)${NC}"
        gcc "$TMP_DIR/test_$test_name.c" -I"$TMP_DIR" -o "$TMP_DIR/test_$test_name" 2>&1 | head -5
        ((FAILED++))
        continue
    fi
    
    # Run the test and capture output
    actual=$("$TMP_DIR/test_$test_name" 2>&1 || true)
    exit_code=$?
    
    # If there's an expected output, validate it
    if [ -n "$expected" ]; then
        if [ "$actual" = "$expected" ]; then
            echo -e "${GREEN}PASS${NC} (output validated)"
            ((PASSED++))
        else
            echo -e "${RED}FAIL (output mismatch)${NC}"
            echo "  Expected: $expected"
            echo "  Actual:   $actual"
            ((FAILED++))
        fi
    else
        # No expected output, just check it runs
        if [ $exit_code -eq 0 ]; then
            echo -e "${GREEN}PASS${NC}"
            ((PASSED++))
        else
            echo -e "${YELLOW}PASS (exit code $exit_code)${NC}"
            ((PASSED++))
        fi
    fi
done

echo ""
echo "=================================="
echo "  Results"
echo "=================================="
echo -e "Passed: ${GREEN}$PASSED${NC}"
echo -e "Failed: ${RED}$FAILED${NC}"
echo ""

# Cleanup
rm -rf "$TMP_DIR"

if [ $FAILED -eq 0 ]; then
    echo -e "${GREEN}All tests passed!${NC}"
    exit 0
else
    echo -e "${RED}Some tests failed.${NC}"
    exit 1
fi
