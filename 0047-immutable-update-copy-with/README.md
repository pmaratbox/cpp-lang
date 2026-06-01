# 0047 — Immutable Update (Copy-with)

Make a copy of the point `(1, 2)` with its `x` changed to `9`, leaving the original intact, and print `original: (1, 2)` then `updated: (9, 2)`. Like C, a C++ `struct` copies on assignment (`Point p2 = p1;`), so mutating the copy's `x` does not affect the original. Value semantics make the "update" just a copy plus a write.

## Run

    make && ./immutable
