#include <iostream>
#include <thread>
#include <atomic>
#include <vector>

int main() {
    std::atomic<int> value{0};
    auto worker = [&]() {
        for (int i = 0; i < 25; ++i) {
            int expected = value.load();
            while (!value.compare_exchange_weak(expected, expected + 1)) {
                // expected is reloaded by compare_exchange_weak on failure
            }
        }
    };

    std::vector<std::thread> threads;
    for (int i = 0; i < 4; ++i) threads.emplace_back(worker);
    for (auto& t : threads) t.join();

    std::cout << value.load() << '\n';
    return 0;
}
