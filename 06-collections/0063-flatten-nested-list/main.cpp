#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> nested = {{1, 2}, {3, 4}};
    std::vector<int> flat;
    for (const auto& row : nested) {
        flat.insert(flat.end(), row.begin(), row.end());
    }

    bool first = true;
    for (int x : flat) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
