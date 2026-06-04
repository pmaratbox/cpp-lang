#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{1, 3, 5};
    std::vector<int> b{2, 4, 6};
    std::vector<int> out;
    std::size_t n = std::max(a.size(), b.size());
    for (std::size_t i = 0; i < n; ++i) {
        if (i < a.size()) out.push_back(a[i]);
        if (i < b.size()) out.push_back(b[i]);
    }
    for (std::size_t i = 0; i < out.size(); ++i) {
        std::cout << out[i];
        if (i + 1 < out.size()) std::cout << ' ';
    }
    std::cout << '\n';
}
