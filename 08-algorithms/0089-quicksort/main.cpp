#include <iostream>
#include <vector>

std::vector<int> quicksort(const std::vector<int>& items) {
    if (items.size() <= 1) return items;
    int pivot = items[0];
    std::vector<int> less, greater;
    for (size_t i = 1; i < items.size(); i++) {
        if (items[i] < pivot) less.push_back(items[i]);
        else greater.push_back(items[i]);
    }
    std::vector<int> result = quicksort(less);
    result.push_back(pivot);
    std::vector<int> g = quicksort(greater);
    result.insert(result.end(), g.begin(), g.end());
    return result;
}

int main() {
    std::vector<int> data = {3, 1, 4, 1, 5, 2};
    std::vector<int> sorted = quicksort(data);
    bool first = true;
    for (int x : sorted) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
