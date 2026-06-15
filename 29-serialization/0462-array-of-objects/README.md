# 0462 — Array of objects

Serializes a `std::vector<Person>` into a JSON array using the nlohmann/json library (`<nlohmann/json.hpp>`). Each `Person` is built into a `json` object whose keys (`age`, `name`) are kept alphabetical by nlohmann/json's default sorted-key ordering, then appended to a `json::array()` and emitted compactly with `dump()`.

## Run

    make && ./array-of-objects
