#include <iostream>
#include <span>
#include <vector>

std::vector<int> rev(std::span<const int> xs) {
    if (xs.empty()) return {};
    std::vector<int> result = rev(xs.subspan(1));
    result.push_back(xs.front());
    return result;
}

int main() {
    std::vector<int> xs{1, 2, 3};
    std::vector<int> r = rev(xs);
    for (std::size_t i = 0; i < r.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << r[i];
    }
    std::cout << '\n';
}
