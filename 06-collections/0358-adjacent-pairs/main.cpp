#include <iostream>
#include <vector>

int main() {
    std::vector<int> xs{1, 2, 3, 4};
    for (std::size_t i = 0; i + 1 < xs.size(); ++i) {
        std::cout << xs[i] << ',' << xs[i + 1];
        if (i + 2 < xs.size()) std::cout << ' ';
    }
    std::cout << '\n';
}
