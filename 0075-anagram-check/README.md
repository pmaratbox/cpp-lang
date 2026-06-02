# 0075 — Anagram Check

Check whether each pair is an anagram by comparing sorted letters — `listen`/`silent` and `hello`/`world` — printing `listen/silent: yes` and `hello/world: no`. `std::sort` orders each copied string's characters; the by-value parameters keep the originals intact for printing.

## Run

    make && ./anagram
