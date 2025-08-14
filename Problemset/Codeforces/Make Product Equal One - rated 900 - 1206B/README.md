# Minimum Cost to Make All Elements Equal to 1

## Description
This program calculates the **minimum cost** to convert all integers in a given list to `1`, following these rules:

- For positive numbers: reduce them to `1` (cost = `x - 1`).
- For negative numbers: increase them to `-1` (cost = `-x - 1`).
- For zeros: change them to `1` (cost = `1`).
- If the count of negative numbers is odd and there are no zeros, convert one `-1` to `1` (cost = `2`).

## Input
- First line: An integer `n` — the number of elements.
- Second line: `n` integers.

## Output
- A single integer representing the **minimum total cost**.

## Example
### Input
```
5
-2 4 0 -1 2
```
### Output
```
8
```

## Explanation
```
- `-2` → `-1` (cost = 1)  
- `4` → `1` (cost = 3)  
- `0` → `1` (cost = 1)  
- `-1` → `-1` (cost = 0)  
- `2` → `1` (cost = 1)  
Total = `1 + 3 + 1 + 0 + 1 = 6` (No extra conversion needed as negatives are even)
```
