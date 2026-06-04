#include <iostream>

struct Handler {
    int level;
    Handler* next = nullptr;
    explicit Handler(int l) : level(l) {}
    void setNext(Handler* n) { next = n; }
    void handle(int request) {
        if (request == level) {
            std::cout << "handled by " << level << '\n';
        } else if (next) {
            next->handle(request);
        }
    }
};

int main() {
    Handler h1(1), h2(2), h3(3);
    h1.setNext(&h2);
    h2.setNext(&h3);
    h1.handle(2);
}
