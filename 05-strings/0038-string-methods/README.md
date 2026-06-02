# 0038 — String Methods

Split `"a,b,c"` on commas, upper-case each part, and join them with `-`, printing `A-B-C`. The standard library has no `split`, so a `std::stringstream` with `std::getline(ss, part, ',')` tokenizes; `std::toupper` upper-cases each character and the pieces are concatenated. C++20/23 `std::ranges` add view-based splitting.

## Run

    make && ./strmethods
