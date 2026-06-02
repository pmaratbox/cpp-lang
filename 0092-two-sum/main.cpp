#include <iostream>
#include <unordered_map>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    std::unordered_map<int, int> seen;
    for (int i = 0; i < 4; i++) {
        auto it = seen.find(target - nums[i]);
        if (it != seen.end()) {
            std::cout << it->second << ' ' << i << '\n';
            break;
        }
        seen[nums[i]] = i;
    }
    return 0;
}
