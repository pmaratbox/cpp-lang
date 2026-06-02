# 0066 — Multiple Assignment & Destructuring

Swap two variables (`a = 1`, `b = 2`) with a single multiple-assignment, then unpack the pair `(3, 4)` into two variables — printing `2 1` then `3 4`. `std::tie(a, b) = std::make_tuple(b, a)` does the multiple assignment, and a structured binding `auto [x, y] = pair` (C++17) unpacks the pair.

## Run

    make && ./destructuring
