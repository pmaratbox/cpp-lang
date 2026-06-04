#include <iostream>
#include <vector>

class MinHeap {
public:
    void push(int v) {
        data_.push_back(v);
        std::size_t i = data_.size() - 1;
        while (i > 0) {
            std::size_t parent = (i - 1) / 2;
            if (data_[parent] <= data_[i]) break;
            std::swap(data_[parent], data_[i]);
            i = parent;
        }
    }

    int pop() {
        int top = data_.front();
        data_.front() = data_.back();
        data_.pop_back();
        std::size_t i = 0;
        std::size_t n = data_.size();
        while (true) {
            std::size_t left = 2 * i + 1;
            std::size_t right = 2 * i + 2;
            std::size_t smallest = i;
            if (left < n && data_[left] < data_[smallest]) smallest = left;
            if (right < n && data_[right] < data_[smallest]) smallest = right;
            if (smallest == i) break;
            std::swap(data_[i], data_[smallest]);
            i = smallest;
        }
        return top;
    }

    bool empty() const { return data_.empty(); }

private:
    std::vector<int> data_;
};

int main() {
    MinHeap heap;
    heap.push(3);
    heap.push(1);
    heap.push(2);

    bool first = true;
    while (!heap.empty()) {
        if (!first) std::cout << ' ';
        std::cout << heap.pop();
        first = false;
    }
    std::cout << '\n';
    return 0;
}
