#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (i > 0) std::cout << ' ';
            std::cout << matrix[i][j];
        }
        std::cout << '\n';
    }
    return 0;
}
