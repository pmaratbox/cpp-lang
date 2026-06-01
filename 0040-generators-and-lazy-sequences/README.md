# 0040 — Generators & Lazy Sequences

Produce an endless lazy sequence of squares and take only the first three, printing `1 4 9`. A *stateful lambda* capturing `n` by reference acts as a generator, returning the next square each call. C++20 coroutines and C++23's `std::generator` provide real lazy generators, but a closure is the simplest form.

## Run

    make && ./gen
