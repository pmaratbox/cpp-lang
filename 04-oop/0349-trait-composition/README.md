# 0349 — Trait Composition

Compose two capabilities (A printing "a", B printing "b") into one type and invoke both, printing `a b`. C++ achieves trait mixing through multiple inheritance, so `struct AB : A, B` inherits both methods.

## Run

    make && ./traitcomposition
