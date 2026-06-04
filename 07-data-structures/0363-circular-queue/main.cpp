#include <array>
#include <iostream>

class CircularQueue {
public:
    bool enqueue(int value) {
        if (size_ == Capacity) return false;
        buffer_[tail_] = value;
        tail_ = (tail_ + 1) % Capacity;
        ++size_;
        return true;
    }

    bool dequeue() {
        if (size_ == 0) return false;
        head_ = (head_ + 1) % Capacity;
        --size_;
        return true;
    }

    void print() const {
        for (int i = 0; i < size_; ++i) {
            if (i) std::cout << ' ';
            std::cout << buffer_[(head_ + i) % Capacity];
        }
        std::cout << '\n';
    }

private:
    static constexpr int Capacity = 3;
    std::array<int, Capacity> buffer_{};
    int head_ = 0;
    int tail_ = 0;
    int size_ = 0;
};

int main() {
    CircularQueue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.dequeue();
    queue.enqueue(4);
    queue.print();
    return 0;
}
