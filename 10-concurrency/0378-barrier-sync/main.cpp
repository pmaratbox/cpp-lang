#include <iostream>
#include <thread>
#include <barrier>
#include <atomic>
#include <vector>

int main() {
    std::atomic<int> reached{0};
    std::barrier sync(3, [&]() noexcept {
        std::cout << "all reached: " << reached.load() << '\n';
    });

    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i) {
        threads.emplace_back([&]() {
            reached.fetch_add(1);
            sync.arrive_and_wait();
        });
    }
    for (auto& t : threads) t.join();
    return 0;
}
