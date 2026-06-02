# 0014 — Higher-Order Functions

Write `apply(f, x)` that calls the function `f` on `x`, then pass it two
different functions, `inc` and `double`. Here `f` is a function pointer
`int (*f)(int)`; C++ also has `std::function` and lambdas for richer callables.
(The doubling function is `dbl` because `double` is a reserved type keyword.)

## Run

    make && ./hof
