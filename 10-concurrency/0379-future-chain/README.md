# 0379 — Future Chain

Chain asynchronous steps 5 -> (*2) -> (+1) and print the final value `11`. Each `std::async` future feeds the next via `get()` to compose the chain.

## Run

    make && ./futurechain
