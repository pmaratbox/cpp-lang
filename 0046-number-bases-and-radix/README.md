# 0046 — Number Bases & Radix

Print the integer `255` in hexadecimal, octal, and binary, producing `hex: ff`, `oct: 377`, and `bin: 11111111`. The iostream manipulators `std::hex` and `std::oct` change the stream's base (and persist), but there is no binary manipulator — `std::bitset<8>` formats the binary string instead.

## Run

    make && ./bases
