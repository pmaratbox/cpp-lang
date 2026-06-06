# 0420 — Retry On Error

Implement retry(n) that resubscribes to the source on error up to n times; the source succeeds on the 3rd subscription. In C++ the observer is a struct of `std::function` callbacks and `retry` wires a self-recursive relay that resubscribes on error.

## Run

    make -s && ./retryonerror
