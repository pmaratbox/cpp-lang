#include <iostream>
#include <queue>
#include <vector>

int main() {
    const int n = 4;
    std::vector<std::vector<std::pair<int, int>>> adj(n);
    auto add = [&](int u, int v, int w) { adj[u].push_back({v, w}); };
    add(0, 1, 4);
    add(0, 2, 1);
    add(2, 1, 2);
    add(1, 3, 1);
    add(2, 3, 5);

    const int INF = 1 << 30;
    std::vector<int> dist(n, INF);
    dist[0] = 0;
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,
                        std::greater<>>
        pq;
    pq.push({0, 0});
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;
        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < n; ++i) std::cout << dist[i] << (i + 1 < n ? " " : "\n");
    return 0;
}
