# 0050 — Stacks

Push `1`, `2`, and `3` onto a stack, then pop them all off and print them in last-in-first-out order: `3 2 1`. `std::stack` is a container adaptor (over a `deque` by default) exposing `push`, `top`, and `pop` — note `pop` removes without returning, so `top()` is read first.

## Run

    make && ./stacks
