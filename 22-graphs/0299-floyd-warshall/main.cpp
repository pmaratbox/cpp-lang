#include <array>
#include <iostream>

int main() {
    const int n = 3;
    const int INF = 1 << 29;
    std::array<std::array<int, n>, n> dist{};
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) dist[i][j] = (i == j) ? 0 : INF;

    dist[0][1] = 3;
    dist[1][2] = 1;
    dist[0][2] = 5;

    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    std::cout << dist[0][2] << "\n";
    return 0;
}
