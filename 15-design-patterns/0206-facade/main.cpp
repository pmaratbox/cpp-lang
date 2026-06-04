#include <iostream>
#include <string>

struct Sub1 { void init() {} };
struct Sub2 { void init() {} };
struct Sub3 { void init() {} };

struct Facade {
    Sub1 a; Sub2 b; Sub3 c;
    std::string start() {
        a.init();
        b.init();
        c.init();
        return "ready";
    }
};

int main() {
    Facade f;
    std::cout << f.start() << '\n';
}
