#include <iostream>

struct Memento {
    int state;
    explicit Memento(int s) : state(s) {}
};

struct Originator {
    int state = 0;
    Memento save() const { return Memento(state); }
    void restore(const Memento& m) { state = m.state; }
};

int main() {
    Originator o;
    o.state = 1;
    Memento snapshot = o.save();
    o.state = 2;
    std::cout << o.state << ' ';
    o.restore(snapshot);
    std::cout << o.state << '\n';
}
