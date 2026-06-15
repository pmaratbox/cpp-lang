# 0467 — Field rename

Uses the nlohmann/json library's custom `to_json`/`from_json` ADL hooks to map the C++ struct field `fullName` to the differently-named JSON key `full_name`. The serializer writes the chosen key explicitly, so the code field and the wire key are decoupled, and `dump()` emits compact JSON.

## Run

    make && ./field-rename
