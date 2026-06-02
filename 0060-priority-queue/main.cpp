#include <iostream>
#include <queue>
#include <vector>
#include <functional>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    for (int n : {3, 1, 2}) {
        pq.push(n);
    }

    bool first = true;
    while (!pq.empty()) {
        if (!first) std::cout << ' ';
        std::cout << pq.top();
        pq.pop();
        first = false;
    }
    std::cout << '\n';
    return 0;
}
