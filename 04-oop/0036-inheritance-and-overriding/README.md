# 0036 — Inheritance & Overriding

Define a base `Animal` with a `speak` method, a `Dog` that overrides it, and call both, printing `animal: some sound` and `dog: Woof`. Marking `speak` `virtual` enables dynamic dispatch, and `Dog`'s `override` replaces it (the keyword makes the compiler verify it really overrides). A `virtual` destructor ensures correct cleanup through a base pointer.

## Run

    make && ./inheritance
