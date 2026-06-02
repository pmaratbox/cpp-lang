# 0033 — Custom Error Types

Define a custom error, raise it from a `check` that rejects values over `100`, catch it for the input `200`, and print `error: value too large`. A custom exception typically derives from `std::exception` (here `std::runtime_error`, which stores the message); `throw` raises it and `catch (const TooLargeError&)` handles it, reading the text via `what()`.

## Run

    make && ./errors
