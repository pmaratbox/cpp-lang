# 0123 — Base64 Encode

Base64-encode the bytes of "hi" to get `aGk=`. With no Base64 in the standard library, we index a manual 64-char table over each 3-byte group and pad with `=`.

## Run

    make && ./encode
