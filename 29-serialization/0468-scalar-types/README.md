# 0468 — Scalar types

Uses the nlohmann/json library (`<nlohmann/json.hpp>`) to serialize an object with three scalar fields — `active` (bool), `count` (int), and `label` (string) — to compact JSON. A `json` object stores keys sorted alphabetically by default, and `dump()` (with no indent argument) emits a compact string with lowercase booleans.

## Run

    make && ./scalar-types
