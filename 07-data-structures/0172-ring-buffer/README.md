# 0172 — Ring Buffer

Push 1,2,3,4,5 into a fixed capacity-3 ring buffer (overwriting oldest) and print the final contents `3 4 5`. A `std::array` plus head index and modular arithmetic keeps the buffer fixed-size with no allocation.

## Run

    make && ./buffer
