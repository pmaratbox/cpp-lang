#include <iostream>
#include <unordered_map>

std::unordered_map<int, int> cache;

int fib(int n) {
    if (n < 2) return n;
    auto it = cache.find(n);
    if (it != cache.end()) return it->second;
    int result = fib(n - 1) + fib(n - 2);
    cache[n] = result;
    return result;
}

int main() {
    std::cout << fib(10) << '\n';
    return 0;
}
