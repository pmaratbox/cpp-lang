#include <iostream>
#include <string>
#include <vector>

template <typename T, typename F>
T fold(const std::vector<T>& xs, T identity, F combine) {
    T acc = identity;
    for (const auto& x : xs) acc = combine(acc, x);
    return acc;
}

int main() {
    std::vector<std::string> strs{"a", "b", "c"};
    std::vector<int> nums{1, 2, 3};

    auto concat = fold<std::string>(strs, "", [](const std::string& a, const std::string& b) { return a + b; });
    auto total = fold<int>(nums, 0, [](int a, int b) { return a + b; });

    std::cout << concat << ' ' << total << '\n';
}
