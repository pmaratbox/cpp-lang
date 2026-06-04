#include <iostream>

struct RangeIterator {
    int current;
    int end;
    RangeIterator(int start, int stop) : current(start), end(stop) {}
    bool hasNext() const { return current <= end; }
    int next() { return current++; }
};

int main() {
    RangeIterator it(1, 3);
    bool first = true;
    while (it.hasNext()) {
        if (!first) std::cout << ' ';
        std::cout << it.next();
        first = false;
    }
    std::cout << '\n';
}
