#include <deque>
#include <iostream>

int main() {
    std::deque<int> deque;
    deque.push_back(1);
    deque.push_back(2);
    deque.push_front(0);

    bool first = true;
    for (int value : deque) {
        if (!first) std::cout << ' ';
        std::cout << value;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
