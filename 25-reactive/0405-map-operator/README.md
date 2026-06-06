# 0405 — Map Operator

Implement a map operator that transforms each emitted value, applying x => x*2 to a stream of 1, 2, 3, 4. In C++ the Observable wraps a std::function subscribe and map composes a forwarding observer.

## Run

    make -s && ./mapoperator
