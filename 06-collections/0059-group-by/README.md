# 0059 — Group By

Group the words `one`, `two`, `three` by their length and print each length with its words, in ascending order of length: `3:[one,two] 5:[three]`. `std::map<size_t, vector<string>>` is ordered by key, so iteration is ascending; `groups[len]` default-constructs an empty vector before `push_back`.

## Run

    make && ./groupby
