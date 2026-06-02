# 0019 — Recursion

Define a recursive `factorial(n)` that multiplies `n` by `factorial(n - 1)` until it bottoms out at `1`, then print `factorial(5) = 120`. The recursive shape matches the C version; because the multiplication happens after `factorial(n - 1)` returns, the call is not in tail position, so no compiler can rewrite it as a loop and depth is bounded by the stack. `long` is 64 bits on this platform, giving more headroom than `int`, which `factorial` overflows by `13!`.

## Run

    make && ./recursion
