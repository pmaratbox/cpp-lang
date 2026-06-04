#include <iostream>

struct Command {
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void undo() = 0;
};

struct AddCommand : Command {
    int& counter;
    int amount;
    AddCommand(int& c, int a) : counter(c), amount(a) {}
    void execute() override { counter += amount; }
    void undo() override { counter -= amount; }
};

int main() {
    int counter = 0;
    AddCommand cmd(counter, 5);
    cmd.execute();
    std::cout << counter << ' ';
    cmd.undo();
    std::cout << counter << '\n';
}
