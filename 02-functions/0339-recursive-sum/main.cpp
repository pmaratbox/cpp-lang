#include <iostream>
#include <span>
#include <vector>

int sum(std::span<const int> xs) {
    if (xs.empty()) return 0;
    return xs.front() + sum(xs.subspan(1));
}

int main() {
    std::vector<int> xs{1, 2, 3, 4};
    std::cout << sum(xs) << '\n';
}
