#include <iostream>
#include <future>

int task(int x) {
    return x;
}

int main() {
    auto a = std::async(std::launch::async, task, 1);
    auto b = std::async(std::launch::async, task, 2);
    std::cout << "sum: " << a.get() + b.get() << '\n';
    return 0;
}
