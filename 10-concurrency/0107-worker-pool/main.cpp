#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> jobs{1, 2, 3, 4};
    std::vector<int> results;
    std::mutex job_m, res_m;
    size_t next = 0;

    auto worker = [&] {
        for (;;) {
            int n;
            {
                std::lock_guard<std::mutex> lock(job_m);
                if (next >= jobs.size()) return;
                n = jobs[next++];
            }
            int sq = n * n;
            {
                std::lock_guard<std::mutex> lock(res_m);
                results.push_back(sq);
            }
        }
    };

    std::vector<std::thread> pool;
    for (int i = 0; i < 3; ++i) pool.emplace_back(worker);
    for (auto& t : pool) t.join();

    std::sort(results.begin(), results.end());
    for (size_t i = 0; i < results.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << results[i];
    }
    std::cout << '\n';
}
