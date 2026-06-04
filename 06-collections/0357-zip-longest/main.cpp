#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> a{"1", "2", "3"};
    std::vector<std::string> b{"a", "b"};
    std::size_t n = std::max(a.size(), b.size());
    for (std::size_t i = 0; i < n; ++i) {
        std::string x = i < a.size() ? a[i] : "-";
        std::string y = i < b.size() ? b[i] : "-";
        std::cout << x << y;
        if (i + 1 < n) std::cout << ' ';
    }
    std::cout << '\n';
}
