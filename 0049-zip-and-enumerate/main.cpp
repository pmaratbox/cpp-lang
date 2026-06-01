#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> letters = {"a", "b", "c"};
    std::vector<int> nums = {1, 2, 3};
    for (size_t i = 0; i < letters.size(); i++) {
        if (i > 0) std::cout << " ";
        std::cout << letters[i] << "=" << nums[i];
    }
    std::cout << "\n";
    return 0;
}
