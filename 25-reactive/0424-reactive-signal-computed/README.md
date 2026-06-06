# 0424 — Signal + Computed

Implement fine-grained reactivity: a writable signal and a derived computed that recomputes when its dependency changes. Here a `Signal` stores a value plus a vector of subscriber callbacks, and a `Computed` registers a lambda as a subscriber so it recomputes and caches when a dependency notifies.

## Run

    make -s && ./reactivesignalcomputed
