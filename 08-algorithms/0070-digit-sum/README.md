# 0070 — Digit Sum

Sum the decimal digits of `1234` (repeatedly take the last digit with `% 10` and drop it with `/ 10`) and print the total: `10`. `n % 10` takes the last digit and integer `n /= 10` drops it until `n` is zero.

## Run

    make && ./digitsum
