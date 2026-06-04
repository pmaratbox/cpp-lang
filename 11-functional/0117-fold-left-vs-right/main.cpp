#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> xs{1, 2, 3};
    auto sub = [](int a, int b) { return a - b; };

    int l = std::accumulate(xs.begin(), xs.end(), 0, sub);

    int r = 0;
    for (auto it = xs.rbegin(); it != xs.rend(); ++it) {
        r = sub(*it, r);
    }

    std::cout << l << ' ' << r << '\n';
}
