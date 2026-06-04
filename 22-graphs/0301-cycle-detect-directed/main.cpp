#include <iostream>
#include <vector>

int main() {
    const int n = 3;
    std::vector<std::vector<int>> adj(n);
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);

    enum Color { White, Gray, Black };
    std::vector<Color> color(n, White);
    bool cycle = false;

    auto dfs = [&](auto&& self, int u) -> void {
        color[u] = Gray;
        for (int v : adj[u]) {
            if (color[v] == Gray) {
                cycle = true;
            } else if (color[v] == White) {
                self(self, v);
            }
        }
        color[u] = Black;
    };

    for (int i = 0; i < n && !cycle; ++i)
        if (color[i] == White) dfs(dfs, i);

    std::cout << (cycle ? "cycle" : "acyclic") << "\n";
    return 0;
}
