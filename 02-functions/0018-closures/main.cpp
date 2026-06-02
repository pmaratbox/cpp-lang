#include <iostream>

auto counter() {
    return [count = 0]() mutable { return ++count; };
}

int main() {
    auto next = counter();
    std::cout << "count: " << next() << '\n';
    std::cout << "count: " << next() << '\n';
    return 0;
}
