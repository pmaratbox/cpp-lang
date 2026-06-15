# 0463 — Array of primitives

Constructs a `nlohmann::json` value from a `std::vector<int>` using the nlohmann/json library (`<nlohmann/json.hpp>`), which converts the C++ container into a JSON array, then serializes it to a compact JSON string with `arr.dump()`. Array elements keep their insertion order, producing the canonical compact output.

## Run

    make && ./array-of-primitives
