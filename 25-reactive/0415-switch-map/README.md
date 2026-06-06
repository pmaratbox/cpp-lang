# 0415 — SwitchMap

Implement switchMap: when a new outer value arrives, cancel the previous inner subscription before starting the new one. In C++ a `std::shared_ptr<Task>` flag token lets the virtual-time scheduler mark pending inner emissions dead on switch.

## Run

    make -s && ./switchmap
