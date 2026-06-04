# 0195 — Defer LIFO Order

Register three deferred actions printing 1, 2, 3 and show they run in last-in-first-out order `3 2 1`. C++ has no `defer`, but RAII scope-guard destructors run in reverse construction order, giving the same LIFO behavior.

## Run

    make && ./lifoorder
