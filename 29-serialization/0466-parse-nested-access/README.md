# 0466 — Parse & access nested

Parses a JSON document with the nlohmann/json library (`<nlohmann/json.hpp>`) using `json::parse`, then walks the resulting dynamic tree with `operator[]` to read a deeply nested value: `user.name` and the first element of the `user.roles` array. Values are extracted as `std::string` via `.get<std::string>()`.

## Run

    make && ./parse-nested-access
