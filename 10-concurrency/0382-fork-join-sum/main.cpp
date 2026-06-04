#include <iostream>
#include <future>

int sumRange(int lo, int hi) {
    if (hi - lo <= 1) {
        return lo;
    }
    int mid = lo + (hi - lo) / 2;
    std::future<int> left = std::async(std::launch::async, sumRange, lo, mid);
    int right = sumRange(mid, hi);
    return left.get() + right;
}

int main() {
    // sum of [1..8] over half-open range [1, 9)
    std::cout << sumRange(1, 9) << '\n';
    return 0;
}
