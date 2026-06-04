#include <iostream>
#include <vector>
#include <algorithm>

void siftDown(std::vector<int>& a, int start, int end) {
    int root = start;
    while (2 * root + 1 <= end) {
        int child = 2 * root + 1;
        if (child + 1 <= end && a[child] < a[child + 1]) ++child;
        if (a[root] < a[child]) {
            std::swap(a[root], a[child]);
            root = child;
        } else return;
    }
}

void heapSort(std::vector<int>& a) {
    int n = static_cast<int>(a.size());
    for (int i = n / 2 - 1; i >= 0; --i) siftDown(a, i, n - 1);
    for (int end = n - 1; end > 0; --end) {
        std::swap(a[0], a[end]);
        siftDown(a, 0, end - 1);
    }
}

int main() {
    std::vector<int> a{5, 3, 8, 1, 4};
    heapSort(a);
    bool first = true;
    for (int v : a) {
        if (!first) std::cout << " ";
        std::cout << v;
        first = false;
    }
    std::cout << "\n";
    return 0;
}
