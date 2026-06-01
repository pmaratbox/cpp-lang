# 0043 — Function Composition

Compose `inc` (add one) and `twice` (multiply by two) into one function and apply it to `3`, so `inc(twice(3))` prints `7`. `std::function<int(int)>` type-erases the closure so `compose` can return it; the returned lambda captures `f` and `g` by value and computes `f(g(x))`. A raw lambda has its own unnameable type, hence `std::function`.

## Run

    make && ./compose
