#include <array>
#include <iostream>
#include <tuple>
#include <vector>

int main() {
    const int n = 3;
    std::vector<std::tuple<int, int, int>> edges = {
        {0, 1, 1}, {1, 2, -2}, {0, 2, 4}};

    const int INF = 1 << 30;
    std::array<int, n> dist;
    dist.fill(INF);
    dist[0] = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (auto [u, v, w] : edges) {
            if (dist[u] != INF && dist[u] + w < dist[v]) dist[v] = dist[u] + w;
        }
    }

    for (int i = 0; i < n; ++i) std::cout << dist[i] << (i + 1 < n ? " " : "\n");
    return 0;
}
