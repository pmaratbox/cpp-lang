#include <iostream>
#include <future>

int main() {
    std::future<int> a = std::async(std::launch::async, [] { return 10; });
    std::future<int> b = std::async(std::launch::async, [] { return 20; });
    std::cout << a.get() + b.get() << '\n';
}
