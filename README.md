# Daily LeetCode & Computer Science Practice

A growing collection of LeetCode solutions and programming exercises. The goal is to
practice problem-solving consistently, compare approaches across several programming languages, and keep
related computer science notes and experiments in one place.

## Languages

LeetCode and algorithm solutions in this repository are written in **four languages**:

- Python
- C++
- JavaScript
- TypeScript

Not every problem has a solution in all four languages yet. Where multiple versions
exist, they are grouped by language so they can be compared easily. The `database/`
folder may contain standalone SQL practice; SQL is not a fifth LeetCode solution track.

## What You'll Find

- **Data structures and algorithms (DSA):** focused problems and implementations.
  The current example is Two Sum, implemented in all four languages.
- **Random problems:** individual problems collected during practice. The current
  Decode Ways exercise has Python, C++, JavaScript, and TypeScript versions.
- **30 Days of JavaScript:** daily JavaScript challenges, with TypeScript versions
  alongside them where available.
- **Database practice:** standalone SQL exercises, such as the two-table script.
- **System design and distributed systems:** dedicated folders for notes and exercises
  as those sections are built out.
- **Challenges and problem organization:** folders for grouping additional exercises
  over time.

This is an active learning repository, so the topics and language coverage will grow
as more solutions and notes are added.

## Repository Layout

```text
.
├── 30-days-of-Js/
│   ├── javascript/          # 30 Days of JavaScript solutions
│   └── typescript/          # TypeScript counterparts
├── DSA/
│   ├── c++/
│   ├── js/
│   ├── python/
│   └── ts/                  # DSA solutions by language
├── Randoms/                 # Randoms selected Problems
├── database/                # Standalone SQL practice
├── challenges/              # Space for challenge collections
├── problems/                # Space for additional problem groupings
├── system-design/           # System design notes and exercises
└── distributed-system/      # Distributed systems notes and exercises
```


## Running Solutions

Run commands from the repository root.

### Python

```bash
python3 DSA/python/twosum.py
```

### JavaScript

```bash
node DSA/js/twosum.js
```

### TypeScript

Install the project dependencies once, then run a TypeScript file with `ts-node`:

```bash
npm install
npx ts-node DSA/ts/twosum.ts
```

The root `tsconfig.json` provides the TypeScript compiler settings used by the
solutions. You can run other `.ts` files the same way, replacing the path.

### C++

C++ solutions may use the LeetCode submission format rather than being standalone
programs. Submit them in the LeetCode editor, or add the required headers and a
`main()` function before compiling locally with a C++ compiler such as `g++`.

## Adding a Solution

1. Put the solution in the relevant topic folder.
2. Use the language subfolder for DSA solutions (`python/`, `c++/`, `js/`, or `ts/`).
3. Keep the same problem name across language versions when adding counterparts.
4. Include the problem title or link and a short explanation when useful.
5. Add test examples or a small driver when needed to make a solution easy to run.

The aim is to keep solutions readable and easy to compare, while using this repository
to learn not just to collect answers.