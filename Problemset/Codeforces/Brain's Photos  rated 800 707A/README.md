# Image Color Detector

This program checks whether a given image (represented as a grid of characters) is **colored** or **black & white**.

## How it Works
1. Input:
   - First line: two integers `n` (rows) and `m` (columns).
   - Next `n` lines: `m` characters each, representing pixel colors.
     - `C`, `Y`, or `M` → colored pixel.
     - Any other character (e.g., `B`, `W`, etc.) → black & white pixel.
2. Processing:
   - If at least one colored pixel exists → output `#Color`.
   - Otherwise → output `#Black&White`.

## Example
**Input:**
```
3 3
B W B
W C W
B W B
```

**Output:**
#Color
---
