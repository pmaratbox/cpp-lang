#include <iostream>
#include <vector>

struct SegTree {
    int n;
    std::vector<int> tree;

    SegTree(const std::vector<int>& data) : n(static_cast<int>(data.size())), tree(2 * data.size()) {
        for (int i = 0; i < n; ++i) tree[n + i] = data[i];
        for (int i = n - 1; i > 0; --i) tree[i] = tree[2 * i] + tree[2 * i + 1];
    }

    int query(int l, int r) { // inclusive [l, r]
        int sum = 0;
        for (l += n, r += n + 1; l < r; l /= 2, r /= 2) {
            if (l & 1) sum += tree[l++];
            if (r & 1) sum += tree[--r];
        }
        return sum;
    }
};

int main() {
    SegTree st({1, 2, 3, 4, 5});
    std::cout << st.query(1, 3) << "\n";
    return 0;
}
