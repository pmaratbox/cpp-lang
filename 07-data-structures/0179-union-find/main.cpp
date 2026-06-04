#include <iostream>
#include <numeric>
#include <vector>

class UnionFind {
public:
    explicit UnionFind(int n) : parent_(n) {
        std::iota(parent_.begin(), parent_.end(), 0);
    }

    int find(int x) {
        while (parent_[x] != x) {
            parent_[x] = parent_[parent_[x]];
            x = parent_[x];
        }
        return x;
    }

    void unite(int a, int b) { parent_[find(a)] = find(b); }

    bool connected(int a, int b) { return find(a) == find(b); }

private:
    std::vector<int> parent_;
};

int main() {
    UnionFind uf(4);
    uf.unite(0, 1);
    uf.unite(2, 3);
    std::cout << (uf.connected(0, 1) ? "yes" : "no") << ' '
              << (uf.connected(0, 2) ? "yes" : "no") << '\n';
    return 0;
}
