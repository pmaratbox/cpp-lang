#include <iostream>
#include <list>
#include <unordered_map>

class LruCache {
public:
    explicit LruCache(int capacity) : capacity_(capacity) {}

    int get(int key) {
        auto it = map_.find(key);
        if (it == map_.end()) return -1;
        order_.splice(order_.begin(), order_, it->second);
        return it->second->second;
    }

    void put(int key, int value) {
        auto it = map_.find(key);
        if (it != map_.end()) {
            it->second->second = value;
            order_.splice(order_.begin(), order_, it->second);
            return;
        }
        if (static_cast<int>(map_.size()) == capacity_) {
            auto last = order_.back();
            map_.erase(last.first);
            order_.pop_back();
        }
        order_.emplace_front(key, value);
        map_[key] = order_.begin();
    }

private:
    int capacity_;
    std::list<std::pair<int, int>> order_;
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> map_;
};

int main() {
    LruCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cache.get(1);
    cache.put(3, 3);
    std::cout << cache.get(1) << ' ' << cache.get(2) << '\n';
    return 0;
}
