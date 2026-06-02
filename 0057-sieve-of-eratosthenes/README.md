# 0057 — Sieve of Eratosthenes

Use the Sieve of Eratosthenes to find every prime number up to `10` and print them: `2 3 5 7`. `std::vector<bool>` (a bit-packed specialization) holds the flags; multiples are struck from `i*i`, and a single pass collects the primes.

## Run

    make && ./sieve
