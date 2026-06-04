#include <iostream>
#include <memory>
#include <string>

struct Subject {
    virtual ~Subject() = default;
    virtual std::string request() = 0;
};

struct RealSubject : Subject {
    std::string request() override { return "loaded"; }
};

struct Proxy : Subject {
    std::unique_ptr<RealSubject> real;
    std::string request() override {
        if (!real) real = std::make_unique<RealSubject>();
        return real->request();
    }
};

int main() {
    Proxy p;
    std::cout << p.request() << '\n';
}
