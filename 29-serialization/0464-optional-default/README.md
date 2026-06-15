# 0464 — Optional field default

Parses `{"name":"alice"}` with nlohmann/json (`<nlohmann/json.hpp>`), where the `age` field is absent. Uses the library's `json::value(key, default)` accessor to supply a default of `0` when the key is missing, then prints `name age`.

## Run

    make && ./optional-default
