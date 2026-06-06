# 0417 — BehaviorSubject

Implement a BehaviorSubject that holds a current value and replays it immediately to each new subscriber. In C++ each observer is a `std::function<void(int)>` stored in a vector, and `subscribe` invokes it with the current value before retaining it.

## Run

    make -s && ./behaviorsubject
