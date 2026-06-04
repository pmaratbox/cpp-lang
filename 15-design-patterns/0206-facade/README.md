# 0206 — Facade

Expose a single facade call that starts three subsystems and reports `ready`. The `Facade` owns the three subsystems and its `start()` calls each `init()` in turn.

## Run

    make && ./facade
