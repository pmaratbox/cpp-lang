# 0109 — Run-Once Initialization

Ensure an initializer runs exactly once even when several threads race to trigger it, printing `init count: 1`. `std::call_once` with a shared `std::once_flag` guarantees the init body runs a single time no matter how many threads call it.

## Run

    make && ./onceinit
