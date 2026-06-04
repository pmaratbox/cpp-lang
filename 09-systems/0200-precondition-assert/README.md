# 0200 — Precondition Assert

Check a precondition arg>0: for 5 print `ok`, and for -1 report the failure `error: must be positive`, on two lines. C++ validates the argument and throws `std::invalid_argument` on failure, which the caller catches and reports via `.what()`.

## Run

    make && ./assert
