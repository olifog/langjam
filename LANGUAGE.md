# nh Language Reference

A NetHack-themed programming language for the langjam.

---

## Quick Reference

| Concept | Syntax |
|---------|--------|
| Statement end | `.` |
| Variable decl | `x := value.` |
| Assignment | `x = value.` |
| Float | `3.14f` |
| Function def | `#name(args) > ... <` |
| Expression fn | `#name(args) => expr.` |
| Function call | `/name/arg1/arg2.` |
| Return | `<< value` |
| Break | `>>` |
| Pipe | `value \| func` |
| Match | `value \| > pattern => result <` |
| Lambda | `\(args) => expr` |
| Logic | `and` `or` `not` |
| Comparison | `lt` `gt` `le` `ge` `==` `!=` |
| Implicit var | `_` |
| Struct | `{ key: value }` |
| Member access | `obj->field` |
| When | `action when cond.` |
| Unless | `action unless cond.` |
| If-else | `a if cond else b` |
| Loop | `loop > ... <` |
| For | `for x in start..end > ... <` |
| Range | `0..10` |

---

## Scope Characters: `>` and `<`

Inspired by NetHack's staircase symbols:
- `>` — stairs down (enter scope)
- `<` — stairs up (exit scope)

```
#main() >
    x := 5.
    << x.
<
```

---

## Literals

```
42                    // Integer
3.14f                 // Float (use f suffix)
"hello"               // String  
true false            // Boolean
[1, 2, 3]             // Array
{ x: 5, y: 10 }       // Struct/Object
```

---

## Variables

```
x := 5.               // Declaration (creates new variable)
MAX := 100.           // Constant (UPPERCASE by convention)
x = 10.               // Assignment (to existing variable)
pi := 3.14f.          // Float variable
name := "hero".       // String variable
arr := [].            // Array variable
```

**Important:** `:=` is for declarations only, `=` is for assignments only.

---

## Operators

### Arithmetic
```
+ - * / %
```

### Comparison (word-based)
```
lt  // less than
gt  // greater than
le  // less or equal
ge  // greater or equal
==  // equal
!=  // not equal
```

### Logical (words, not symbols)
```
and or not
```

---

## Functions

### Block Body
```
#name(args) >
    body.
    << result.        // Return
<
```

### Expression Body
```
#name(args) => expr.
```

### Calling (Wand Syntax)

Functions are called using `/wand/` syntax:

```
/add/5/3.
/print/"hello".
/process/data.
```

**Note:** Use variables for negative numbers or complex expressions:
```
neg := -5.
/func/neg.            // Use variable
/func/(a + b).        // Or parentheses for expressions
```

---

## Structs/Objects

Create structured data with key-value pairs using `{ }`:

```
hero := { hp: 100, x: 5, y: 5 }.
point := { x: 0, y: 0 }.
empty := {}.
```

### Member Access

Use `->` to access fields:

```
x := hero->hp.
pos := hero->x + hero->y.
```

### Member Assignment

```
hero->hp = 80.
hero->x = hero->x + 1.
```

---

## Pipes

Chain operations left-to-right:

```
// Pipe to function
5 | /double/.

// Chain multiple pipes
5 | /double/ | /add_ten/ | /add_ten/.

// Pipe to lambda
5 | \(x) => x * x.
```

When piping to a function, the piped value becomes the first argument.

---

## Pattern Matching

Match a value against patterns:

```
value | >
    0 => "zero"
    1 => "one"
    _ => "other"
<.
```

Use `_` as a wildcard that matches anything:

```
n | >
    0 => 0
    1 => 1
    _ => _ + 10      // _ refers to the matched value
<.
```

---

## Lambdas

Anonymous functions:

```
\(x) => x * 2.
\(a, b) => a + b.
```

Lambdas are most useful when piped:

```
5 | \(x) => x * x.    // Returns 25
```

---

## Control Flow

### Trailing Conditions

Conditions come *after* the action (reads naturally):

```
/attack/enemy when hp gt 50.
/flee/ unless cornered.
/heal/ when hp lt 30.
```

Works with assignments too:
```
x = 10 when flag.
player->hp = 0 when dead.
count = count + 1 when valid.
```

### Inline If-Else

```
value := a if condition else b.
bonus := 2 if critical else 1.
```

### Loops

Basic loop:
```
loop >
    /tick/.
    >> when done.     // Break out
<
```

For-each with range:
```
for i in 0..10 >
    /print/i.
<
```

Range with expressions:
```
for i in start..(end + 1) >
    /process/i.
<
```

Conditional loop:
```
loop when running >
    /update/.
<
```

---

## Arrays

```
arr := [].            // Empty array
arr := [1, 2, 3].     // With elements

arr[0] = 10.          // Assignment
x := arr[0].          // Access
arr[i] = arr[i] + 1.  // Index with expression
```

---

## Comments

```
// Single line comment

/* Multi-line
   comment */
```

---

## Implicit Variable `_`

In pattern matching, `_` refers to the matched value:

```
n | >
    0 => 0
    _ => _ * 2        // _ is n
<.
```

---

## Complete Example

```
// Simple game logic in nh

MAX_HP := 100.

#clamp(val, min_val, max_val) >
    << min_val when val lt min_val.
    << max_val when val gt max_val.
    << val.
<

#create_player() >
    << { hp: 100, x: 5, y: 5 }.
<

#damage(player, amount) >
    new_hp := /clamp/(player->hp - amount)/0/MAX_HP.
    player->hp = new_hp.
    << player->hp.
<

#move(player, dx, dy) >
    player->x = player->x + dx.
    player->y = player->y + dy.
<

#get_status(hp) >
    << hp | >
        0 => 0          // Dead
        _ => 1 if _ lt 30 else 2  // Low or OK
    <.
<

#main() >
    player := /create_player/.
    
    // Damage and check status
    /damage/player/20.
    status := /get_status/player->hp.
    
    // Heal if low
    player->hp = player->hp + 10 when status == 1.
    
    // Movement
    /move/player/1/0.
    
    << 0.
<
```

---

## Design Philosophy

- **`>` `<` for scope** — Like NetHack staircases, descend into code blocks
- **Wand syntax `/fn/args`** — Function calls look like casting spells
- **Statements end with `.`** — Like dungeon crawl text
- **`#name` for functions** — Like NetHack extended commands (#pray, #sit)
- **`->` for member access** — Arrow points to the field
- **Word operators `lt` `gt` `le` `ge`** — Readable comparisons
- **Trailing conditions** — "attack when ready" reads naturally
- **Pipes `|`** — Data flows through transformations
- **Pattern matching** — Match values elegantly
- **No type annotations** — Keep it simple for a jam

## Notes

- **C Reserved Words**: Function names that conflict with C keywords (like `double`, `float`, `int`) are automatically mangled with a `ds_` prefix during compilation.

---

## Runtime Functions

These functions are provided by the runtime:

```
/console_log/"message".     // Print string to console
/console_log_int/42.        // Print integer to console

// Graphics (when available)
/gfx_clear/r/g/b/a.         // Clear screen
/gfx_rect/x/y/w/h/r/g/b/a.  // Draw rectangle
/gfx_present/.              // Present frame
```
