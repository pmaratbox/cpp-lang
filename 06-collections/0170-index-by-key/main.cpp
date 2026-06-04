#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <vector>

int main() {
    std::vector<std::pair<int, std::string>> people{{1, "alice"}, {2, "bob"}};
    std::map<int, std::string> by_id;
    for (const auto& [id, name] : people) by_id[id] = name;

    std::cout << "id 2: " << by_id.at(2) << '\n';
}
