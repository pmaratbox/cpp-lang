# 0151 — Singleton

Obtain a singleton instance twice and confirm both references are the same object, printing `same: yes`. A function-local `static` (Meyers singleton) gives thread-safe lazy initialization of one shared instance.

## Run

    make && ./singleton
