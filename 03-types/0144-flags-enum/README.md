# 0144 — Flag Enum (Bit Flags)

Combine bit flags READ(1) and WRITE(2) into 3, check that WRITE is set, and print `3 yes`. Unscoped enums with explicit power-of-two values combine cleanly with the bitwise `|` and `&` operators.

## Run

    make && ./enum
