# 0422 — Throttle (Virtual Time)

Implement throttle(window) (leading edge) on a virtual-time scheduler: emit a value, then suppress further values for `window` ticks. A `std::function` observer closes over a shared `block_until` and queries the scheduler's virtual clock to gate each emission.

## Run

    make -s && ./throttlevirtualtime
