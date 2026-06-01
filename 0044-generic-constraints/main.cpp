#include <concepts>
#include <iostream>
#include <string>

template <std::totally_ordered T>
T largest(T a, T b) {
    return a > b ? a : b;
}

int main() {
    std::cout << largest(3, 9) << '\n';
    std::cout << largest(std::string("apple"), std::string("pear")) << '\n';
    return 0;
}
