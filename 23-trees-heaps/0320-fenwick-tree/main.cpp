#include <iostream>
#include <vector>

struct Fenwick {
    std::vector<int> bit;

    Fenwick(int n) : bit(n + 1, 0) {}

    void update(int i, int delta) { // 1-indexed
        for (; i < static_cast<int>(bit.size()); i += i & (-i)) bit[i] += delta;
    }

    int prefix(int i) { // sum of first i elements
        int sum = 0;
        for (; i > 0; i -= i & (-i)) sum += bit[i];
        return sum;
    }
};

int main() {
    std::vector<int> data{1, 2, 3, 4, 5};
    Fenwick f(static_cast<int>(data.size()));
    for (int i = 0; i < static_cast<int>(data.size()); ++i) f.update(i + 1, data[i]);
    std::cout << f.prefix(4) << "\n";
    return 0;
}
