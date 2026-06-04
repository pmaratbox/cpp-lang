#include <iostream>
#include <functional>

int main() {
    int calls = 0;
    auto counted = [&calls](std::function<void()> f) {
        return [&calls, f]() {
            ++calls;
            f();
        };
    };

    auto work = counted([] {});
    for (int i = 0; i < 5; ++i) work();

    std::cout << "calls: " << calls << '\n';
    return 0;
}
