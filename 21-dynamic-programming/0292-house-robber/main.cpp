#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const std::vector<int> houses{2, 7, 9, 3, 1};
    int rob = 0, skip = 0;
    for (int v : houses) {
        int newRob = skip + v;
        skip = std::max(skip, rob);
        rob = newRob;
    }
    std::cout << std::max(rob, skip) << '\n';
}
