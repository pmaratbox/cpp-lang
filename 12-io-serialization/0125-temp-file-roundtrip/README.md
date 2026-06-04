# 0125 — Temp File Roundtrip

Write a string to a temporary file, read it back, confirm it matches, delete the file, and print `roundtrip: ok`. `std::filesystem::temp_directory_path()` gives the system temp dir, and reading `in.rdbuf()` into an `ostringstream` slurps the whole file.

## Run

    make && ./fileroundtrip
