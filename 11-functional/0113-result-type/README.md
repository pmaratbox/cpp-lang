# 0113 — Result / Either Type

Model success and failure with a Result type: safeDiv(10,2) prints `ok: 5` and safeDiv(1,0) prints `err: divide by zero`. `std::expected<int, std::string>` carries either a value or an error and is matched by its boolean conversion.

## Run

    make && ./type
