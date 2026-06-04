# 0198 — Seeded LCG PRNG

Implement a linear congruential generator next=(5*x+3) mod 16 seeded at 1 and print its first 3 outputs `8 11 10`. No `<random>` here: a plain integer recurrence makes the sequence deterministic and identical across languages.

## Run

    make && ./lcgprng
