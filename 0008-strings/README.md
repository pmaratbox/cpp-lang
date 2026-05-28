# 0008 — Strings

Given `name = "world"`, print a greeting, the name in uppercase, and its
length. `std::string` owns its bytes. There is no member that uppercases in
place; the idiom is `std::transform` with `std::toupper` over the characters.
`.size()` (equivalently `.length()`) returns the byte count.

## Run

    make && ./strings
