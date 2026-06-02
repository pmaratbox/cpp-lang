# 0018 — Closures

Build a counter that captures a private count starting at zero; each call to the returned function increments the count and returns it, so calling it twice prints 1 then 2. Unlike C, C++ has real closures: a *lambda* with an init-capture `[count = 0]` creates and owns its own state. The trailing `mutable` is required so the lambda may modify that captured copy, and `auto` deduces both the function's return type and the lambda variable, since every lambda has a unique unnameable type.

## Run

    make && ./closures
