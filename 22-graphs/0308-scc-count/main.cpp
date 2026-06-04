#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

int main() {
    const int n = 4;
    std::vector<std::vector<int>> adj(n);
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);

    std::vector<int> index(n, -1), low(n, 0);
    std::vector<bool> onStack(n, false);
    std::stack<int> st;
    int counter = 0, sccCount = 0;

    auto dfs = [&](auto&& self, int u) -> void {
        index[u] = low[u] = counter++;
        st.push(u);
        onStack[u] = true;
        for (int v : adj[u]) {
            if (index[v] == -1) {
                self(self, v);
                low[u] = std::min(low[u], low[v]);
            } else if (onStack[v]) {
                low[u] = std::min(low[u], index[v]);
            }
        }
        if (low[u] == index[u]) {
            ++sccCount;
            while (true) {
                int w = st.top();
                st.pop();
                onStack[w] = false;
                if (w == u) break;
            }
        }
    };

    for (int i = 0; i < n; ++i)
        if (index[i] == -1) dfs(dfs, i);

    std::cout << sccCount << "\n";
    return 0;
}
