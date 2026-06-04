#include <iostream>
#include <string>

struct Colleague;

struct Mediator {
    Colleague* a = nullptr;
    Colleague* b = nullptr;
    void send(Colleague* from, const std::string& msg);
};

struct Colleague {
    std::string name;
    Mediator* mediator;
    Colleague(std::string n, Mediator* m) : name(std::move(n)), mediator(m) {}
    void send(const std::string& msg) { mediator->send(this, msg); }
    void receive(const std::string& msg) {
        std::cout << name << " got: " << msg << '\n';
    }
};

void Mediator::send(Colleague* from, const std::string& msg) {
    Colleague* target = (from == a) ? b : a;
    target->receive(msg);
}

int main() {
    Mediator m;
    Colleague a("A", &m), b("B", &m);
    m.a = &a;
    m.b = &b;
    a.send("hi");
}
