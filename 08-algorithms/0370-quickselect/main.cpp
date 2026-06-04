#include <iostream>
#include <vector>
#include <utility>

int partition(std::vector<int>& a, int lo, int hi) {
    int pivot = a[hi];
    int i = lo;
    for (int j = lo; j < hi; ++j)
        if (a[j] < pivot) std::swap(a[i++], a[j]);
    std::swap(a[i], a[hi]);
    return i;
}

int quickselect(std::vector<int>& a, int lo, int hi, int k) {
    int p = partition(a, lo, hi);
    if (p == k) return a[p];
    if (k < p) return quickselect(a, lo, p - 1, k);
    return quickselect(a, p + 1, hi, k);
}

int main() {
    std::vector<int> a{7, 10, 4, 3, 20, 15};
    std::cout << quickselect(a, 0, a.size() - 1, 2) << "\n";
}
