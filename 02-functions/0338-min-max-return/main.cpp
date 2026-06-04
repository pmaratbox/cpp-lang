#include <iostream>
#include <utility>
#include <vector>

std::pair<int, int> minMax(const std::vector<int>& xs) {
    int lo = xs[0], hi = xs[0];
    for (int x : xs) {
        if (x < lo) lo = x;
        if (x > hi) hi = x;
    }
    return {lo, hi};
}

int main() {
    auto [lo, hi] = minMax({4, 1, 7});
    std::cout << lo << ' ' << hi << '\n';
}
