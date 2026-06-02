# 0016 — Generics

Define a generic `first` function that returns the first element of a list, then call it on a list of integers and a list of strings to show one definition working at two types. C++ uses *templates*: `template <typename T> T first(...)` is a compile-time blueprint, and the compiler instantiates a concrete function for each `T` it is called with (`int`, then `std::string`) — much like Rust's monomorphization. The template argument is deduced from the call, so `first(ints)` needs no explicit `<int>`.

## Run

    make && ./generics
