# 0012 — Enums

Define a `Color` enum (`Red`, `Green`, `Blue`) and print the integer value of
`Green` (1) and `Blue` (2). `enum class` is the scoped, type-safe form: members
are referenced as `Color::Green` and do *not* implicitly convert to `int`, so an
explicit `static_cast<int>` is required.

## Run

    make && ./enums
