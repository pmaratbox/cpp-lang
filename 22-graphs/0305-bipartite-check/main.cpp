#include <iostream>
#include <queue>
#include <vector>

static bool isBipartite(int n, const std::vector<std::pair<int, int>>& edges) {
    std::vector<std::vector<int>> adj(n);
    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::vector<int> color(n, -1);
    for (int s = 0; s < n; ++s) {
        if (color[s] != -1) continue;
        color[s] = 0;
        std::queue<int> q;
        q.push(s);
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v : adj[u]) {
                if (color[v] == -1) {
                    color[v] = color[u] ^ 1;
                    q.push(v);
                } else if (color[v] == color[u]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::pair<int, int>> square = {{0, 1}, {1, 2}, {2, 3}, {3, 0}};
    std::vector<std::pair<int, int>> triangle = {{0, 1}, {1, 2}, {2, 0}};

    std::cout << (isBipartite(4, square) ? "yes" : "no") << " "
              << (isBipartite(3, triangle) ? "yes" : "no") << "\n";
    return 0;
}
