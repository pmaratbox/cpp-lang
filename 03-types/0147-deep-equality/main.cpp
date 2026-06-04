#include <iostream>
#include <utility>

int main() {
    auto a = std::make_pair(std::make_pair(1, 2), std::make_pair(3, 4));
    auto b = std::make_pair(std::make_pair(1, 2), std::make_pair(3, 4));

    std::cout << "equal: " << (a == b ? "yes" : "no") << '\n';
    return 0;
}
