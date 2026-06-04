#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{1, 2, 3};
    std::vector<int> b{4, 5, 6};
    for (std::size_t i = 0; i < a.size(); ++i) {
        std::cout << a[i] + b[i];
        std::cout << (i + 1 < a.size() ? " " : "\n");
    }
}
