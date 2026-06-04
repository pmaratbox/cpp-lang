#include <iostream>

class Singleton {
    Singleton() = default;

public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
};

int main() {
    Singleton& a = Singleton::getInstance();
    Singleton& b = Singleton::getInstance();
    std::cout << "same: " << (&a == &b ? "yes" : "no") << '\n';
}
