#include <iostream>
#include <queue>
#include <vector>

int main() {
    const int n = 4;
    std::vector<std::vector<std::pair<int, int>>> adj(n);
    auto add = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };
    add(0, 1, 1);
    add(1, 2, 2);
    add(2, 3, 3);

    std::vector<bool> inTree(n, false);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,
                        std::greater<>>
        pq;
    pq.push({0, 0});  // (weight, node)
    int total = 0;
    while (!pq.empty()) {
        auto [w, u] = pq.top();
        pq.pop();
        if (inTree[u]) continue;
        inTree[u] = true;
        total += w;
        for (auto [v, cost] : adj[u])
            if (!inTree[v]) pq.push({cost, v});
    }

    std::cout << total << "\n";
    return 0;
}
