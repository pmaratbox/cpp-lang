#include <iostream>
#include <vector>

int main() {
    std::vector<int> row{1};
    for (int r = 0; r < 4; ++r) {
        for (std::size_t i = 0; i < row.size(); ++i)
            std::cout << row[i] << (i + 1 < row.size() ? " " : "\n");
        std::vector<int> next(row.size() + 1, 1);
        for (std::size_t i = 1; i < row.size(); ++i)
            next[i] = row[i - 1] + row[i];
        row = next;
    }
}
