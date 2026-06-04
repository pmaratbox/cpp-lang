# 0130 — Format ISO Date

Format the date y=2026, m=6, d=4 as a zero-padded ISO string `2026-06-04`. In C++ `std::setfill('0')` with `std::setw` zero-pads each field of the stream.

## Run

    make && ./isodate
