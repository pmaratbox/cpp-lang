#include <iostream>

int main() {
    for (int n : {4, 7}) {
        const char *label = n % 2 == 0 ? "even" : "odd";
        std::cout << n << ": " << label << '\n';
    }
    return 0;
}
