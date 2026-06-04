#include <iostream>
#include <vector>

void dfs(const std::vector<std::vector<int>> &adj, int node,
         std::vector<bool> &visited, bool &first) {
    visited[node] = true;
    if (!first) std::cout << ' ';
    std::cout << node;
    first = false;
    for (int n : adj[node])
        if (!visited[n])
            dfs(adj, n, visited, first);
}

int main() {
    std::vector<std::vector<int>> adj = {
        {1, 2},
        {0, 3},
        {0, 3},
        {1, 2},
    };

    std::vector<bool> visited(adj.size(), false);
    bool first = true;
    dfs(adj, 0, visited, first);
    std::cout << '\n';
    return 0;
}
