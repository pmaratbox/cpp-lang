# 0407 — Scan (Running Fold)

Implement a scan operator that emits the running accumulation; produce the running sums of 1, 2, 3, 4. A std::shared_ptr holds the accumulator state across each pushed emission.

## Run

    make -s && ./scanaccumulate
