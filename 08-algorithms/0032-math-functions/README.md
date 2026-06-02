# 0032 — Math Functions

Take the square root of `16`, raise `2` to the 10th power, the absolute value of `-5`, and the larger of `3` and `9`, printing `sqrt: 4`, `pow: 1024`, `abs: 5`, and `max: 9`. `<cmath>` supplies `std::sqrt` and `std::pow` (returning `double`), `<cstdlib>`/`<cmath>` the overloaded `std::abs`, and `<algorithm>` the `std::max`. `static_cast<int>` narrows the floating-point results.

## Run

    make && ./math
