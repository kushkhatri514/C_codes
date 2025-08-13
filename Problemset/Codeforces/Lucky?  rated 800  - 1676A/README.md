# Lucky Ticket Checker in C++

## Description
This program checks whether each given 6-digit ticket number is "lucky."  
A ticket is considered lucky if the sum of the first three digits equals the sum of the last three digits.

## How It Works
1. The program first reads an integer `n` — the number of tickets to check.
2. For each ticket:
   - The last 3 digits are extracted, and their sum is stored as `back_sum`.
   - The first 3 digits are extracted, and their sum is stored as `front_sum`.
3. If both sums are equal, the ticket is "lucky" and the program outputs `"yes"`. Otherwise, it outputs `"no"`.

## Example

### Input:
```
3
385916
123456
555555
```

### Output:
```
yes
no
yes
```

Explanation:
- `385916` → `3+8+5 = 9+1+6` → lucky 
- `123456` → `1+2+3 ≠ 4+5+6` → not lucky   
- `555555` → `5+5+5 = 5+5+5` → lucky   
---
