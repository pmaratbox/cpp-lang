#include <array>
#include <iostream>

int main() {
    constexpr int N = 3;
    std::array<std::array<int, N>, N> grid{};
    // vertical blinker in the center column
    grid[0][1] = 1;
    grid[1][1] = 1;
    grid[2][1] = 1;

    std::array<std::array<int, N>, N> next{};
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            int live = 0;
            for (int dr = -1; dr <= 1; ++dr) {
                for (int dc = -1; dc <= 1; ++dc) {
                    if (dr == 0 && dc == 0) continue;
                    int nr = r + dr, nc = c + dc;
                    if (nr >= 0 && nr < N && nc >= 0 && nc < N)
                        live += grid[nr][nc];
                }
            }
            if (grid[r][c])
                next[r][c] = (live == 2 || live == 3) ? 1 : 0;
            else
                next[r][c] = (live == 3) ? 1 : 0;
        }
    }

    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c)
            std::cout << (next[r][c] ? '#' : '.');
        std::cout << '\n';
    }
    return 0;
}
