# 0418 — ReplaySubject

Implement a ReplaySubject with a buffer of the last 2 values, replayed to a late subscriber, which then also receives new values. A `std::deque` bounded to the capacity holds the replay buffer that each new `std::function` observer drains on subscribe.

## Run

    make -s && ./replaysubject
