#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> xs{1, 1, 2, 3, 3, 3};
    std::unordered_map<int, int> counts;
    std::vector<int> order;
    for (int x : xs) {
        if (counts.find(x) == counts.end()) order.push_back(x);
        ++counts[x];
    }
    std::stable_sort(order.begin(), order.end(), [&](int a, int b) {
        return counts[a] > counts[b];
    });
    bool first = true;
    for (int v : order) {
        for (int k = 0; k < counts[v]; ++k) {
            if (!first) std::cout << ' ';
            std::cout << v;
            first = false;
        }
    }
    std::cout << '\n';
}
