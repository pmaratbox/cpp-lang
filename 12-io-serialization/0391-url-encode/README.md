# 0391 — URL Percent-Encode

Percent-encode the string "a b&c" to `a%20b%26c`. Unreserved characters pass through; others become `%` plus uppercase hex.

## Run

    make && ./urlencode
