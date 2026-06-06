# 0412 — Combine Latest

Implement combineLatest of two timed streams, emitting the pair of latest values whenever either source emits (once both have emitted). A virtual-time scheduler drives the timed sources while shared `std::optional` slots hold each stream's latest value.

## Run

    make -s && ./combinelatest
