# 0121 — Parse CSV

Parse the two CSV rows `alice,30` and `bob,25` into name=value pairs and print `alice=30 bob=25`. An `std::istringstream` with `std::getline(ss, field, ',')` splits each row on the comma delimiter.

## Run

    make && ./parse
