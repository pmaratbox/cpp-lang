#include <algorithm>
#include <iostream>
#include <numeric>
#include <tuple>
#include <vector>

int main() {
    std::vector<std::tuple<int, int, int>> edges = {
        {1, 0, 1}, {2, 1, 2}, {3, 0, 2}};  // (weight, u, v)
    std::sort(edges.begin(), edges.end());

    std::vector<int> parent(3);
    std::iota(parent.begin(), parent.end(), 0);
    auto find = [&](auto&& self, int x) -> int {
        return parent[x] == x ? x : (parent[x] = self(self, parent[x]));
    };

    int total = 0;
    for (auto [w, u, v] : edges) {
        int ru = find(find, u), rv = find(find, v);
        if (ru != rv) {
            parent[ru] = rv;
            total += w;
        }
    }

    std::cout << total << "\n";
    return 0;
}
