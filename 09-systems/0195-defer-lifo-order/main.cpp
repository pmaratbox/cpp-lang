#include <iostream>

// A scope-guard whose destructor "defers" an action; destructors run in
// reverse order of construction, giving LIFO semantics. Destruction order
// here is d3, d2, d1, so the output is "3 2 1".
struct Defer {
    int value;
    const char* sep;
    ~Defer() { std::cout << value << sep; }
};

int main() {
    Defer d1{1, "\n"};  // destroyed last  -> prints "1\n"
    Defer d2{2, " "};   // destroyed second-> prints "2 "
    Defer d3{3, " "};   // destroyed first -> prints "3 "
    return 0;
}
