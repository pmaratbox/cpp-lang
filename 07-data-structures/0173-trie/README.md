# 0173 — Trie

Insert "cat" and "car" into a trie, then search "car" (yes) and "can" (no), printing `yes no`. Each node holds a `std::map<char, std::unique_ptr<TrieNode>>` of children plus an end-of-word flag.

## Run

    make && ./trie
