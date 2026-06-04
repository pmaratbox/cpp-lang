# 0268 — Cellular Automaton Rule 90

Apply one Rule 90 step (new = left XOR right) to the row "00100" with zero boundaries, printing `01010`. Each cell XORs its two neighbors, treating out-of-range cells as 0.

## Run

    make && ./rule90step
