# 0230 — Parse JSON Array

Parse the JSON array text "[1,2,3]" and print the sum of its elements `6`. We strip the brackets and split on commas with `std::getline`'s delimiter overload.

## Run

    make && ./jsonarraysum
