# 0146 — Numeric Conversions

Truncate 3.9 to the int 3 and widen the int 3 to the float 3.0, printing `3 3.0`. `static_cast<int>` truncates toward zero, and `std::fixed` with `setprecision(1)` renders the widened float with one decimal.

## Run

    make && ./conversions
