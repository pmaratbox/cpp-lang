#include <iostream>
#include <future>
#include <vector>

int main() {
    std::vector<int> input{1, 2, 3, 4};
    std::vector<std::future<int>> futures;
    for (int x : input) {
        futures.emplace_back(std::async(std::launch::async, [x]() { return x * x; }));
    }

    bool first = true;
    for (auto& f : futures) {
        if (!first) std::cout << ' ';
        std::cout << f.get();
        first = false;
    }
    std::cout << '\n';
    return 0;
}
