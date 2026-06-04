#include <iostream>
#include <numeric>
#include <vector>

int main() {
    auto square = [](int x) { return x * x; };
    auto sum = [](const std::vector<int>& v) {
        return std::accumulate(v.begin(), v.end(), 0);
    };
    auto compose = [](auto f, auto g) {
        return [=](const std::vector<int>& v) {
            std::vector<int> mapped;
            for (int x : v) mapped.push_back(g(x));
            return f(mapped);
        };
    };

    auto sumOfSquares = compose(sum, square);
    std::cout << sumOfSquares({1, 2, 3}) << '\n';
}
