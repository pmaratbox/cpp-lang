# 0013 — Optional

Hold one value that is present (`42`) and one that is absent, then print each
with a fallback of `-1` when absent. `std::optional<int>` holds either a value
or `std::nullopt`, and `.value_or(fallback)` reads the value or substitutes the
fallback.

## Run

    make && ./optional
