#include <iostream>
#include <future>

int main() {
    std::future<int> step1 = std::async(std::launch::async, []() { return 5; });
    std::future<int> step2 = std::async(std::launch::async, [&step1]() { return step1.get() * 2; });
    std::future<int> step3 = std::async(std::launch::async, [&step2]() { return step2.get() + 1; });
    std::cout << step3.get() << '\n';
    return 0;
}
