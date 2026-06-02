# 0074 — Run-Length Encoding

Run-length encode the string `aaabbc` (each run of a repeated character becomes the character followed by its count), printing `a3b2c1`. `ch + std::to_string(count)` prepends the character to the count's string; the inner loop measures each run.

## Run

    make && ./rle
