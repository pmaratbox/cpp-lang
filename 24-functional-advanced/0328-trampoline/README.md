# 0328 — Trampoline

Sum 1..100 with a trampolined recursion that avoids deep stacks, printing `5050`. Each step returns either a `Done` value or a `More` thunk, and a driving loop bounces the thunks without growing the call stack.

## Run

    make && ./trampoline
