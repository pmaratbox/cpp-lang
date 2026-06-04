#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> a{1, 2, 3, 4};
    std::set<int> remove{2, 4};
    bool first = true;
    for (int x : a) {
        if (remove.count(x)) continue;
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
}
