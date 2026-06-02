# 0068 — GCD (Euclid)

Compute the greatest common divisor of `48` and `36` with Euclid's algorithm (repeatedly replace the pair with `(b, a % b)` until the remainder is zero) and print it: `12`. A hand-written Euclid loop; the standard library also offers `std::gcd` in `<numeric>` (C++17).

## Run

    make && ./gcd
