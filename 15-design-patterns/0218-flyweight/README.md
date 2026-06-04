# 0218 — Flyweight

Share flyweight instances for repeated characters a, b, a and print the number of distinct objects created `2`. A `std::map`-backed factory returns the same `shared_ptr` per key, so only 2 are created.

## Run

    make && ./flyweight
