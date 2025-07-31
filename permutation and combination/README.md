# Permutation and Combination Calculator in C

This is a simple C program that calculates:

- **nPr** → Permutations (order matters)
- **nCr** → Combinations (order doesn't matter)

The user inputs values for `n` and `r`, and selects either `nPr` or `nCr` to get the calculated result.

---

## Features

- Calculates both permutations and combinations
- Handles uppercase/lowercase variations (e.g., `npr`, `NPR`, etc.)
- Simple command-line interface
- Option to exit gracefully

---

## Formula Used

- **nPr = n! / (n - r)!**
- **nCr = n! / (r! * (n - r)!)**

All factorials are computed using a loop-based function.

---

## Sample Output

    Enter the value of n: 5
    Enter the value of r: 2
    Enter nPr or nCr: nPr

    The value of nPr is: 20

---