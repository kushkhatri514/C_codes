# Non-Dot Character Extractor (8×8 Grid)

This program reads multiple **8×8 grids** and extracts all characters that are **not a dot ('.')**, printing them as a continuous string for each grid.

## How it Works
1. Input:
   - First line: integer `n` → number of grids.
   - For each grid:
     - 8 lines with 8 characters each.
2. Processing:
   - Loops through each character.
   - If the character is not a `'.'`, it is printed without spaces.
   - After each grid, a newline is printed.

## Example
**Input:**

```
1
........
..K.....
...A....
...B....
...C....
...D....
...E....
........
```

**Output:**

KABCDE
---
