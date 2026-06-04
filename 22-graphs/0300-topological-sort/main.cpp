#include <iostream>
#include <queue>
#include <vector>

int main() {
    const int n = 4;
    std::vector<std::vector<int>> adj(n);
    std::vector<int> indeg(n, 0);
    auto add = [&](int u, int v) {
        adj[u].push_back(v);
        ++indeg[v];
    };
    add(0, 1);
    add(0, 2);
    add(1, 3);
    add(2, 3);

    std::priority_queue<int, std::vector<int>, std::greater<>> pq;
    for (int i = 0; i < n; ++i)
        if (indeg[i] == 0) pq.push(i);

    std::vector<int> order;
    while (!pq.empty()) {
        int u = pq.top();
        pq.pop();
        order.push_back(u);
        for (int v : adj[u])
            if (--indeg[v] == 0) pq.push(v);
    }

    for (size_t i = 0; i < order.size(); ++i)
        std::cout << order[i] << (i + 1 < order.size() ? " " : "\n");
    return 0;
}
