#include <iostream>
#include <thread>
#include <vector>

int main() {
    std::vector<std::thread> workers;
    for (int i = 0; i < 3; ++i) {
        workers.emplace_back([] { /* trivial work */ });
    }
    int joined = 0;
    for (auto& t : workers) {
        t.join();
        ++joined;
    }
    std::cout << "done: " << joined << '\n';
}
