#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<int> data{3, 2, 1, 5, 6, 4};
    int k = 2;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    for (int v : data) {
        minHeap.push(v);
        if (static_cast<int>(minHeap.size()) > k) minHeap.pop();
    }
    std::cout << minHeap.top() << "\n";
    return 0;
}
