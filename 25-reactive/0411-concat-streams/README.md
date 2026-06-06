# 0411 — Concat Streams

Implement concat: subscribe to the second source only after the first completes; concat [1,2] then [3,4]. In C++ the observer is a struct of std::function callbacks, and concat re-subscribes to the second source from the first's completion handler.

## Run

    make -s && ./concatstreams
