#include <array>
#include <iostream>

int main() {
    std::array<int, 4> nums{1, 2, 3, 4};
    for (std::size_t i = 0; i < nums.size(); ++i) {
        std::cout << (nums[i] % 2 == 0 ? "even" : "odd");
        if (i + 1 < nums.size()) std::cout << ' ';
    }
    std::cout << '\n';
}
