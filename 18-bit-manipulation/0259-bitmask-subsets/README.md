# 0259 — Enumerate Submasks

Enumerate all submasks of the mask 5 (101) in descending order `5 4 1 0`. In cpp the `sub = (sub - 1) & mask` loop walks every submask down to 0.

## Run

    make && ./bitmasksubsets
