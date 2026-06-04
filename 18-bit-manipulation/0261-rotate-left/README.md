# 0261 — Rotate Left (8-bit)

Rotate the 8-bit value 1 left by 1 (->2) and 128 left by 1 (->1), printing `2 1`. In cpp a `std::uint8_t` helper `((x << n) | (x >> (8 - n)))` wraps the high bit around.

## Run

    make && ./rotateleft
