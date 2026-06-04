# 0124 — Path Manipulation

Join "/tmp" and "file.txt", then take the basename and extension, printing `/tmp/file.txt file.txt .txt`. The `<filesystem>` `path` type overloads `operator/` to join and offers `filename()`/`extension()`, with `generic_string()` normalizing to "/" separators.

## Run

    make && ./manipulation
