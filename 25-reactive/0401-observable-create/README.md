# 0401 — Create an Observable

Build a push-based Observable from scratch that emits 1, 2, 3 to its observer and then completes. In C++ the Observable is a `std::function` taking an `Observer` struct of `next`/`complete` callbacks.

## Run

    make -s && ./observablecreate
