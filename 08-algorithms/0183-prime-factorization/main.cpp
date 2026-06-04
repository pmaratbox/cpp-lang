#include <iostream>
#include <vector>

int main() {
    int n = 60;
    std::vector<int> factors;
    for (int d = 2; d * d <= n; ++d)
        while (n % d == 0) {
            factors.push_back(d);
            n /= d;
        }
    if (n > 1) factors.push_back(n);

    for (std::size_t i = 0; i < factors.size(); ++i)
        std::cout << factors[i] << (i + 1 < factors.size() ? " " : "\n");
}
