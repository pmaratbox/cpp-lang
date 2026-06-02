#include <iostream>
#include <vector>

std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    size_t i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) result.push_back(left[i++]);
        else result.push_back(right[j++]);
    }
    while (i < left.size()) result.push_back(left[i++]);
    while (j < right.size()) result.push_back(right[j++]);
    return result;
}

std::vector<int> merge_sort(const std::vector<int>& items) {
    if (items.size() <= 1) return items;
    size_t mid = items.size() / 2;
    std::vector<int> left(items.begin(), items.begin() + mid);
    std::vector<int> right(items.begin() + mid, items.end());
    return merge(merge_sort(left), merge_sort(right));
}

int main() {
    std::vector<int> data = {3, 1, 4, 1, 5, 2};
    std::vector<int> sorted = merge_sort(data);

    bool first = true;
    for (int x : sorted) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
