#include <iostream>
#include <map>

class MultisetCount {
public:
    void add(int value) { ++counts_[value]; }

    void remove(int value) {
        auto it = counts_.find(value);
        if (it == counts_.end()) return;
        if (--it->second == 0) counts_.erase(it);
    }

    int count(int value) const {
        auto it = counts_.find(value);
        return it == counts_.end() ? 0 : it->second;
    }

private:
    std::map<int, int> counts_;
};

int main() {
    MultisetCount bag;
    bag.add(1);
    bag.add(1);
    bag.add(2);
    std::cout << bag.count(1) << ' ';
    bag.remove(1);
    std::cout << bag.count(1) << '\n';
    return 0;
}
