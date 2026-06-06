# 0410 — Merge Streams

Implement merge of two timed streams using a virtual-time scheduler, interleaving them by emission time. A `std::priority_queue` ordered by `(time, seq)` drives the push-based `Observable` deterministically without real threads or clocks.

## Run

    make -s && ./mergestreams
