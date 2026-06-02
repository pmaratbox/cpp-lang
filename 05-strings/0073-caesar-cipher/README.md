# 0073 — Caesar Cipher

Encrypt `abc` with a Caesar cipher shifting each letter forward by `1` (wrapping within the alphabet) and print the result: `bcd`. The `char& ch` reference rewrites each letter in place; `% 26` wraps the shift relative to the base `'a'`.

## Run

    make && ./caesar
