#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> a = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> b = {{5, 6}, {7, 8}};
    int n = 2;
    std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (const auto& row : result) {
        bool first = true;
        for (int x : row) {
            if (!first) std::cout << ' ';
            std::cout << x;
            first = false;
        }
        std::cout << '\n';
    }
    return 0;
}
