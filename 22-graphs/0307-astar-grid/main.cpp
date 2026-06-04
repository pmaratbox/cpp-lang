#include <array>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <vector>

int main() {
    const int N = 3;
    auto h = [](int r, int c) { return std::abs(2 - r) + std::abs(2 - c); };

    std::vector<std::vector<int>> g(N, std::vector<int>(N, 1 << 30));
    g[0][0] = 0;

    using Node = std::tuple<int, int, int>;  // (f, r, c)
    std::priority_queue<Node, std::vector<Node>, std::greater<>> pq;
    pq.push({h(0, 0), 0, 0});

    const std::array<std::pair<int, int>, 4> dirs = {
        {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

    while (!pq.empty()) {
        auto [f, r, c] = pq.top();
        pq.pop();
        if (r == N - 1 && c == N - 1) break;
        for (auto [dr, dc] : dirs) {
            int nr = r + dr, nc = c + dc;
            if (nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
            if (g[r][c] + 1 < g[nr][nc]) {
                g[nr][nc] = g[r][c] + 1;
                pq.push({g[nr][nc] + h(nr, nc), nr, nc});
            }
        }
    }

    std::cout << g[N - 1][N - 1] << "\n";
    return 0;
}
