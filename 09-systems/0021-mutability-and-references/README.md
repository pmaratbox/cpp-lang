# 0021 — Mutability & References

Have a function increment a value in place — through a pointer, reference, or mutable holder — so the caller sees it change from `before: 1` to `after: 2`. `int &n` is a reference parameter — an alias for the caller's variable — so `n++` mutates the original; passing by value (`int n`) would copy it. A reference must bind on initialization and can't be reseated, unlike a pointer.

## Run

    make && ./references
