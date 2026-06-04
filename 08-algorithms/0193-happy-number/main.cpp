#include <iostream>
#include <unordered_set>

int main() {
    int n = 19;
    std::unordered_set<int> seen;
    while (n != 1 && !seen.contains(n)) {
        seen.insert(n);
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        n = sum;
    }
    std::cout << (n == 1 ? "yes" : "no") << '\n';
}
