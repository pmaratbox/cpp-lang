# 0054 — Resource Cleanup & Defer

Acquire a resource, use it, and let the language release it automatically at scope exit, printing `open`, `use`, and `close` in that order. Cleanup is RAII: the destructor `~Resource()` runs deterministically when the object leaves scope — the foundation of C++ resource management.

## Run

    make && ./cleanup
