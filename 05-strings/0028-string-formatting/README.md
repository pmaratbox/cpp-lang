# 0028 — String Formatting

Format the float `3.14159` to two decimals and zero-pad the integer `42` to width five, printing `pi: 3.14` and `id: 00042`. This uses C's `std::printf` with `%.2f` and `%05d`. The iostreams alternative needs `<iomanip>` (`std::setprecision`, `std::setw`, `std::setfill`), and C++20 added a type-safe `std::format` with Rust-like `{:.2}` syntax.

## Run

    make && ./formatting
