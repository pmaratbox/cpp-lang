# 0461 — Nested object

Uses the nlohmann/json library (`<nlohmann/json.hpp>`) to serialize a `Person` that contains a nested `Address` object. Each object is built with `json` value assignment (`j["k"] = v`), nesting the address `json` inside the person `json`, then emitted as compact text with `json::dump()`. nlohmann/json keeps object keys sorted alphabetically by default, so the output is canonical compact JSON.

## Run

    make && ./nested-object
