#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

int main() {
    int counter = 0;
    std::mutex m;
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back([&] {
            for (int j = 0; j < 100; ++j) {
                std::lock_guard<std::mutex> lock(m);
                ++counter;
            }
        });
    }
    for (auto& t : threads) t.join();
    std::cout << counter << '\n';
}
