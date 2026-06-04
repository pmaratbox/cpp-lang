#include <iostream>

int main() {
    constexpr int max_attempts = 5;
    for (int attempt = 1; attempt <= max_attempts; ++attempt) {
        bool ok = attempt >= 3;  // fails on 1 and 2
        if (ok) {
            std::cout << "ok after " << attempt << "\n";
            break;
        }
    }
}
