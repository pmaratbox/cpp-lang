#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    auto doubled_evens = nums | std::views::filter([](int x) { return x % 2 == 0; })
                              | std::views::transform([](int x) { return x * 2; });

    int sum = 0;
    for (int n : doubled_evens) {
        sum += n;
    }

    std::cout << "sum: " << sum << '\n';
    return 0;
}
