#include <functional>
#include <iostream>

// A minimal push-based observer that enforces the contract
// next*-(error|complete). Once a terminal arrives, the observer is
// "stopped" and any further next/terminal calls are no-ops.
class Observer {
public:
    Observer(std::function<void(int)> on_next,
             std::function<void(const std::string&)> on_error,
             std::function<void()> on_complete)
        : on_next_(std::move(on_next)),
          on_error_(std::move(on_error)),
          on_complete_(std::move(on_complete)) {}

    void next(int value) {
        if (stopped_) return;
        on_next_(value);
    }

    void error(const std::string& message) {
        if (stopped_) return;
        stopped_ = true;
        on_error_(message);
    }

    void complete() {
        if (stopped_) return;
        stopped_ = true;
        on_complete_();
    }

private:
    std::function<void(int)> on_next_;
    std::function<void(const std::string&)> on_error_;
    std::function<void()> on_complete_;
    bool stopped_ = false;
};

int main() {
    Observer observer(
        [](int value) { std::cout << value << '\n'; },
        [](const std::string& message) { std::cout << "error: " << message << '\n'; },
        [] { std::cout << "complete" << '\n'; });

    observer.next(1);
    observer.next(2);
    observer.complete();
    observer.next(3);  // ignored: observer is already stopped

    return 0;
}
