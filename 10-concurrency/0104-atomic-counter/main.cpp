#include <iostream>
#include <thread>
#include <atomic>
#include <vector>

int main() {
    std::atomic<int> counter{0};
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back([&] {
            for (int j = 0; j < 100; ++j) {
                counter.fetch_add(1, std::memory_order_relaxed);
            }
        });
    }
    for (auto& t : threads) t.join();
    std::cout << counter.load() << '\n';
}
