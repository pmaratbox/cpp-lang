#include <iostream>

int main() {
    auto scan = []() {
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                if (j > i) break; // skip rest of this row -> next i
                if (i * j == 4) {
                    std::cout << "stop at " << i << ',' << j << '\n';
                    return; // exits both loops
                }
                std::cout << i << ',' << j << '\n';
            }
        }
    };
    scan();
    return 0;
}
