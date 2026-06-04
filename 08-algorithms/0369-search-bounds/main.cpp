#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a{1, 3, 5, 5, 7};
    auto lo = std::lower_bound(a.begin(), a.end(), 5) - a.begin();
    auto hi = std::upper_bound(a.begin(), a.end(), 5) - a.begin();
    std::cout << lo << " " << hi << "\n";
}
