#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    bool first = true;
    while (!queue.empty()) {
        if (!first) std::cout << ' ';
        std::cout << queue.front();
        queue.pop();
        first = false;
    }
    std::cout << '\n';
    return 0;
}
