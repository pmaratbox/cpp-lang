# 0460 — Deserialize an object

Uses the nlohmann/json library (`<nlohmann/json.hpp>`) to parse the JSON string `{"age":30,"name":"alice"}` into a `Person` struct. `json::parse` builds the DOM, and `j.at("key").get<T>()` extracts each typed field into the object before printing `name age`.

## Run

    make && ./deserialize-object
