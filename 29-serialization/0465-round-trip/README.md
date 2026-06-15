# 0465 — Round trip

Demonstrates a full serialize/deserialize round trip with the nlohmann/json library (`<nlohmann/json.hpp>`). A `Person{age=30, name="alice"}` is serialized to compact JSON via `json::dump()` (nlohmann stores object keys in sorted/alphabetical order), then parsed back into a `Person` with `json::parse` and `.get<T>()`, printing the recovered name.

## Run

    make && ./round-trip
