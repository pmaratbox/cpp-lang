#include <iostream>
#include <future>

int main() {
    auto square = [](int n) { return n * n; };
    std::future<int> t1 = std::async(std::launch::async, square, 3);
    std::future<int> t2 = std::async(std::launch::async, square, 4);
    std::cout << t1.get() + t2.get() << '\n';
}
