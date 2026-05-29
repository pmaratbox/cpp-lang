# 0010 — Structs

Define a `Person` struct with a `name` and an `age`, create one ("Ada", 36),
and print each field. A `struct` groups fields (in C++ a `struct` is just a
`class` with public defaults); aggregate initialization `Person{"Ada", 36}`
fills them in order. `std::string` owns the text.

## Run

    make && ./structs
