# 0031 — Type Conversion & Parsing

Parse the string `"42"` into an integer and `"3.5"` into a float, then convert the integer back to a string, printing `int: 42`, `float: 3.5`, and `str: 42`. `std::stoi` and `std::stod` parse from `std::string` and throw `std::invalid_argument` on bad input, while `std::to_string` converts back. The lower-level `std::from_chars` parses without allocating or throwing.

## Run

    make && ./conversion
