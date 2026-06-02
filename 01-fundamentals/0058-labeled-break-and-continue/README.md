# 0058 — Labeled Break & Continue

Scan the pairs `(i, j)` with `i` and `j` each from `1` to `3`: use a labeled `continue` to skip the rest of a row once `j > i`, and a labeled `break` to stop the whole scan at `i * j == 4`, printing `1,1`, `2,1`, and `stop at 2,2`. C++ also lacks labeled break; common idioms are `goto`, a flag, or — as here — wrapping the loops in a lambda and `return`ing to exit them all.

## Run

    make && ./labeled
