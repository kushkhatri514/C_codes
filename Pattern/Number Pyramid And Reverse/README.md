
---

## Features

- Accepts number of lines as user input
- Displays centered pyramid with symmetrical number pattern
- Uses clear logic with nested loops
- Easy to compile and run on any standard C compiler

---

## Logic Overview

Each row contains:
- **Leading spaces** to center the numbers
- **Ascending numbers** from 1 to `i`
- **Descending numbers** from `i-1` back to 1

---

## Formula

For each line `i` from 1 to `n`:
- Print `(n - i)` spaces
- Print numbers from `1` to `i`
- Then print numbers from `i - 1` to `1`

---
