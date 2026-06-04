#include <iostream>
#include <functional>

int add(int a, int b) { return a + b; }

int main() {
    auto add10 = std::bind_front(add, 10);
    std::cout << add10(3) << '\n';
}
