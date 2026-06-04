# 0120 — Append to a File

Write "a" to a file, append "b", then read both lines back and print `a b`. Opening an `std::ofstream` with `std::ios::app` seeks to the end so writes are appended.

## Run

    make && ./tofile
