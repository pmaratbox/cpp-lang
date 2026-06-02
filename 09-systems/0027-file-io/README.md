# 0027 — File I/O

Write `hello, file` to a file, read it back, delete the file, and print `read: hello, file`. `<fstream>` provides RAII file streams: an `std::ofstream` writes and flushes when it goes out of scope, and an `std::ifstream` with `std::getline` reads the line back. `std::remove` (from `<cstdio>`) deletes the file.

## Run

    make && ./fileio
