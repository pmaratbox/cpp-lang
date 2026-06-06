# 0421 — Debounce (Virtual Time)

Implement debounce(window) on a virtual-time scheduler: emit a value only after a quiet gap of `window` ticks with no newer value. A `std::priority_queue` ordered by (time, seq) drives the scheduler, and each new value cancels the prior pending emit via its token.

## Run

    make -s && ./debouncevirtualtime
