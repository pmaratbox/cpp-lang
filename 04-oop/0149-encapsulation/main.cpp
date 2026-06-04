#include <iostream>

class Account {
    int balance;

public:
    explicit Account(int initial) : balance(initial) {}

    void deposit(int amount) { balance += amount; }

    int getBalance() const { return balance; }
};

int main() {
    Account account(100);
    account.deposit(50);
    std::cout << account.getBalance() << '\n';
}
