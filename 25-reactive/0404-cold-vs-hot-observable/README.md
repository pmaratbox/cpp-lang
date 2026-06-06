# 0404 — Cold vs Hot Observable

Contrast a cold observable (re-runs its producer per subscriber) with a hot one (shares a single execution, so late subscribers miss earlier values). In C++ each observer is a `std::function<void(int)>`, and the hot observable multicasts to a `std::vector` of currently subscribed callbacks.

## Run

    make -s && ./coldvshotobservable
