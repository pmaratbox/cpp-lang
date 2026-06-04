#include <iostream>
#include <vector>

int main() {
    const int price = 25;
    int total = 0;
    bool dispensed = false;
    for (int coin : {10, 10, 5}) {
        total += coin;
        if (total >= price && !dispensed) {
            std::cout << "dispensed\n";
            dispensed = true;
        }
    }
    return 0;
}
