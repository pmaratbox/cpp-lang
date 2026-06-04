# 0332 — Y Combinator

Define factorial via a fixed-point combinator (no named self-recursion) and compute 5!, printing `120`. A `fix` combinator feeds a non-recursive generator its own fixed point, so the generator never refers to itself by name.

## Run

    make && ./ycombinator
