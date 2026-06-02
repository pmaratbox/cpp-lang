#include <iostream>

struct Resource {
    Resource() { std::cout << "open\n"; }
    ~Resource() { std::cout << "close\n"; }
};

int main() {
    Resource resource;
    std::cout << "use\n";
    return 0;
}
