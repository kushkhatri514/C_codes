# Maze Path Counter (C Program)

This program calculates the number of possible ways to move from the **top-left corner** of a grid (1,1) to the **bottom-right corner** (n, m) by only moving **right** or **down**.

---

## **How It Works**
- The function `maze()` recursively explores two possible moves at each step:
  1. Move **Right** (`cCol+1`)
  2. Move **Down** (`cRow+1`)
- Base case: When the current position `(cRow, cCol)` matches the end position `(eRow, eCol)`, there is exactly **1 way** (we've reached the destination).
- The total number of ways is calculated by summing the possible **right moves** and **down moves**.

---

## **Example**
For a grid of `3 x 3`:
```
Possible paths = 6
```
Paths:
```
RRDD, RDRD, RDDR, DRRD, DRDR, DDRR
```
(where `R` = move right, `D` = move down)

---
