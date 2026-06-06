# 0414 — FlatMap (mergeMap)

Implement flatMap/mergeMap: map each outer value to an inner timed stream and merge all inners concurrently (no cancellation). A virtual-time `std::priority_queue` scheduler drives all inner streams together so emissions interleave deterministically by time.

## Run

    make -s && ./flatmapstreams
