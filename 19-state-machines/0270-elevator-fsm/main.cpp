#include <iostream>
#include <vector>

int main() {
    std::vector<int> targets{2, 0};
    int floor = 0;
    std::vector<int> visited{floor};
    for (int target : targets) {
        while (floor != target) {
            floor += (target > floor) ? 1 : -1;
            visited.push_back(floor);
        }
    }
    for (size_t i = 0; i < visited.size(); ++i) {
        std::cout << visited[i];
        if (i + 1 < visited.size()) std::cout << ' ';
    }
    std::cout << '\n';
    return 0;
}
