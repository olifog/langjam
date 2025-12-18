# nh

A roguelike dungeon crawler where you write code to control the `@`.

**nh** is both a programming language with NetHack-inspired syntax and a game built entirely in that language. Write bot scripts in the in-game editor, hit play, and watch your code navigate the dungeon.

## The Game

- **Split-screen interface**: Dungeon view on the left, code editor on the right
- **Write bot code**: Control player movement, combat, and exploration
- **Real-time execution**: Watch your bot run with adjustable speed
- **Vim keybindings**: The editor supports vim-style navigation

The game itself—rendering, UI, editor, dungeon generation, combat, particles—is written in nh and compiles to WebAssembly.

## Quick Start

```bash
# Install dependencies
brew install bison flex emscripten   # macOS
# or: apt install bison flex emscripten  # Linux

# Build and run
make dev
```

Then open http://localhost:3000

## The Language

nh uses NetHack-themed syntax where `>` and `<` mark scope (like staircases), functions are called with `/wand/` syntax, and statements end with `.`

```
#main() >
    player := { hp: 100, x: 0, y: 0 }.
    
    loop >
        /move/player/1/0.
        >> when player->x ge 10.
    <
    
    << 0.
<
```

### Syntax Highlights

| Concept | Syntax |
|---------|--------|
| Function | `#name(args) > body <` |
| Call | `/func/arg1/arg2.` |
| Return / Break | `<< value.` / `>>.` |
| Variable | `x := 5.` |
| Struct | `{ key: value }` |
| Member | `obj->field` |
| Loop | `loop > body <` / `for i in 0..10 > <` |
| Pattern match | `val \| > 0 => a _ => b <` |
| Pipe | `5 \| /double/ \| /inc/` |
| Lambda | `\(x) => x * 2` |
| Conditional | `action when cond.` / `a if cond else b` |
| Comparison | `lt` `gt` `le` `ge` `==` `!=` |
| Logic | `and` `or` `not` |

See [LANGUAGE.md](LANGUAGE.md) for the full reference.

## Project Structure

```
nh/
├── compiler/          # nh → C compiler (Bison/Flex)
│   ├── lexer.l        # Tokenizer
│   ├── parser.y       # Grammar
│   ├── ast.c/h        # AST nodes
│   └── codegen.c      # C code generation
├── runtime/           # C runtime (OpenGL bindings, input, math)
│   └── runtime.c/h
├── game/              # The game, written in nh
│   ├── main.nh        # Entry point, layout, game loop
│   ├── editor.nh      # Code editor with vim bindings
│   ├── dungeon.nh     # Procedural dungeon generation
│   ├── player.nh      # Player state and rendering
│   ├── entity.nh      # Enemies and NPCs
│   ├── combat.nh      # Combat system
│   ├── bot.nh         # Bot execution engine
│   ├── bot_eval.nh    # Bot code interpreter
│   ├── render.nh      # Dungeon rendering
│   ├── particles.nh   # Particle effects
│   └── bgshader.nh    # Background shader
├── web/               # Web frontend (Vite + TypeScript)
│   ├── src/           # TypeScript source
│   └── public/        # Static assets + compiled WASM
├── tests/             # Test suite (40 tests)
└── interpreter/       # Self-hosted interpreter (experimental)
```

## Build Targets

| Command | Description |
|---------|-------------|
| `make dev` | Build everything + start dev server |
| `make` | Build the nh compiler only |
| `make wasm` | Compile game to WASM |
| `make dist` | Production build |
| `make test` | Run test suite |
| `make clean` | Remove build artifacts |

## Architecture

```
┌─────────────────────────────────────────────────────────────┐
│                        nh Compiler                          │
│  ┌─────────┐    ┌─────────┐    ┌─────────┐    ┌──────────┐ │
│  │  Flex   │───▶│  Bison  │───▶│   AST   │───▶│ C Codegen│ │
│  │ (lexer) │    │(parser) │    │         │    │          │ │
│  └─────────┘    └─────────┘    └─────────┘    └──────────┘ │
└─────────────────────────────────────────────────────────────┘
                              │
                              ▼
                         Generated C
                              │
              ┌───────────────┴───────────────┐
              ▼                               ▼
         Emscripten                         GCC
              │                               │
              ▼                               ▼
      game.wasm + game.js              Native binary
              │
              ▼
    ┌─────────────────────┐
    │   Browser Runtime   │
    │  (WebGL2 + Canvas)  │
    └─────────────────────┘
```

## Requirements

- **bison** - Parser generator
- **flex** - Lexer generator  
- **gcc** - C compiler
- **emscripten** - WASM toolchain
- **node/npm** - Web dev server

---

*Built for Langjam 2025*
