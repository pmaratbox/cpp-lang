#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const int n = 5;
    std::vector<std::pair<int, int>> edges = {{0, 1}, {1, 2}, {3, 4}};

    std::vector<int> parent(n);
    std::iota(parent.begin(), parent.end(), 0);
    auto find = [&](auto&& self, int x) -> int {
        return parent[x] == x ? x : (parent[x] = self(self, parent[x]));
    };
    for (auto [u, v] : edges) parent[find(find, u)] = find(find, v);

    int count = 0;
    for (int i = 0; i < n; ++i)
        if (find(find, i) == i) ++count;

    std::cout << count << "\n";
    return 0;
}
