# Fast Exponentiation (Power Function) in C

This program calculates `a^b` (a raised to the power b) using a **logarithmic time recursive algorithm**, also known as **Exponentiation by Squaring**.
This Program calls the function multiple times.

---

## Features

- Computes large powers efficiently
- Uses recursion and divide & conquer
- Time complexity: **O(log b)** instead of O(b)

---

## Algorithm Overview

### Formula:
```
power(a, b) =
1 if b == 0
power(a, b/2)^2 if b is even
power(a, b/2)^2 * a if b is odd
```

This reduces the number of multiplications from **b** to **log₂(b)**.

---

## Sample Output

Enter the base: 2
Enter the power: 10
The result is 1024

---
