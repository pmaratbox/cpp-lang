#include <iostream>
#include <map>
#include <utility>

class SparseMatrix {
public:
    void set(int row, int col, int value) {
        if (value == 0) {
            entries_.erase({row, col});
        } else {
            entries_[{row, col}] = value;
        }
    }

    int get(int row, int col) const {
        auto it = entries_.find({row, col});
        return it == entries_.end() ? 0 : it->second;
    }

private:
    std::map<std::pair<int, int>, int> entries_;
};

int main() {
    SparseMatrix matrix;
    matrix.set(1, 1, 5);
    std::cout << matrix.get(1, 1) << ' ' << matrix.get(0, 0) << '\n';
    return 0;
}
