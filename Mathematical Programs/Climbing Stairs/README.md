# Climbing Stairs Problem in C

This program solves the classic **"climbing stairs"** problem using recursion.

---

## Problem Description

You are climbing a staircase with `n` steps. You can either take **1 step** or **2 steps** at a time.  
The goal is to **find the number of distinct ways** to reach the top.

This is a standard **dynamic programming problem** based on Fibonacci logic.

---

## Formula Used
```
stairs(n) = stairs(n - 1) + stairs(n - 2)
```
- Base cases:
  - stairs(1) = 1
  - stairs(2) = 2

---

## Sample Output

```
Enter the number of stairs: 5
The total number of ways to climb 5 stairs is 8
```

---
