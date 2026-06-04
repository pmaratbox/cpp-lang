#include <iostream>
#include <string>
#include <vector>

struct Observer {
    virtual ~Observer() = default;
    virtual void update(int value) = 0;
};

struct ConcreteObserver : Observer {
    std::string id;
    explicit ConcreteObserver(std::string i) : id(std::move(i)) {}
    void update(int value) override {
        std::cout << id << ": " << value << '\n';
    }
};

struct Subject {
    std::vector<Observer*> observers;
    void subscribe(Observer* o) { observers.push_back(o); }
    void notify(int value) {
        for (auto* o : observers) o->update(value);
    }
};

int main() {
    ConcreteObserver obs1("obs1"), obs2("obs2");
    Subject s;
    s.subscribe(&obs1);
    s.subscribe(&obs2);
    s.notify(5);
}
