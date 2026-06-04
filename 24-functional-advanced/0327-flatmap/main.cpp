#include <iostream>
#include <vector>

int main() {
    std::vector<int> xs{1, 2, 3};
    std::vector<int> result;
    for (int x : xs) {
        for (int y : {x, x * 10}) result.push_back(y);
    }
    for (size_t i = 0; i < result.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << result[i];
    }
    std::cout << '\n';
}
