# 0229 — Parse INI

Parse the INI text with section [s] and key k=v, printing the flattened entry `s.k=v`. We read lines with `std::getline` over a `std::istringstream` and track the current section.

## Run

    make && ./iniparse
