# 0097 — Enums with Associated Values

Define a shape type carrying associated data — `Rect(2, 3)` and `Square(4)` — compute each area by matching on the variant, and print `6` and `16`. `std::variant<Rect, Square>` is a type-safe union; `holds_alternative`/`get` test and extract the active variant.

## Run

    make && ./shapes
