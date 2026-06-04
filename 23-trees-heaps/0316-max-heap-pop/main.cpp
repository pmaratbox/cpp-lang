#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<int> data{3, 1, 4, 1, 5};
    std::priority_queue<int> heap(data.begin(), data.end());

    bool first = true;
    for (int i = 0; i < 3; ++i) {
        if (!first) std::cout << " ";
        std::cout << heap.top();
        first = false;
        heap.pop();
    }
    std::cout << "\n";
    return 0;
}
