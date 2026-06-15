# 0459 — Serialize an object

Builds a `nlohmann::json` object from the nlohmann/json library (`<nlohmann/json.hpp>`), assigning the `age` and `name` fields, then serializes it to a compact JSON string with `j.dump()`. nlohmann/json stores object keys sorted alphabetically by default, so the output keys come out in canonical order.

## Run

    make && ./serialize-object
