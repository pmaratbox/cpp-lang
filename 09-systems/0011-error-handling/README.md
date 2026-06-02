# 0011 — Error Handling

Write a `divide(a, b)` that throws on a zero divisor, then call it on `10 / 2`
(prints the result) and `10 / 0` (prints an error). C++ uses **exceptions**:
`throw` raises (here `std::runtime_error`), `try` / `catch` handles it, and
`.what()` returns the message.

## Run

    make && ./error_handling
