#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int cur = a[0], best = a[0];
    for (std::size_t i = 1; i < a.size(); ++i) {
        cur = std::max(a[i], cur + a[i]);
        best = std::max(best, cur);
    }
    std::cout << best << '\n';
}
