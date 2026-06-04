#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>
#include <vector>

int main() {
    std::once_flag flag;
    std::atomic<int> init_count{0};

    auto init = [&] { ++init_count; };

    std::vector<std::thread> threads;
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back([&] {
            std::call_once(flag, init);
        });
    }
    for (auto& t : threads) t.join();

    std::cout << "init count: " << init_count.load() << '\n';
}
