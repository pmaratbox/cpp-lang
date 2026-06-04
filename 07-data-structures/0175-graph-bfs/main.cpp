#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<std::vector<int>> adj = {
        {1, 2},
        {0, 3},
        {0, 3},
        {1, 2},
    };

    std::vector<bool> visited(adj.size(), false);
    std::queue<int> q;
    q.push(0);
    visited[0] = true;

    bool first = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        if (!first) std::cout << ' ';
        std::cout << node;
        first = false;
        for (int n : adj[node]) {
            if (!visited[n]) {
                visited[n] = true;
                q.push(n);
            }
        }
    }
    std::cout << '\n';
    return 0;
}
