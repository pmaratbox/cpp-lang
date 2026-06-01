# 0042 — Environment Variables

Read the environment variable `LESSON_ENV_VAR`, falling back to `default` when it is unset, and print `value: default`. `std::getenv` (from `<cstdlib>`) behaves like C's, returning `nullptr` when unset; the ternary copies the value or the default into a `std::string`.

## Run

    make && ./env
