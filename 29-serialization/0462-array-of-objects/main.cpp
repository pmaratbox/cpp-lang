#include <nlohmann/json.hpp>
#include <iostream>
#include <vector>

using json = nlohmann::json;

struct Person {
    int age;
    std::string name;
};

int main() {
    std::vector<Person> people{ {30, "alice"}, {25, "bob"} };

    json arr = json::array();
    for (const auto& p : people) {
        json j;
        j["age"] = p.age;
        j["name"] = p.name;
        arr.push_back(j);
    }

    std::cout << arr.dump() << "\n";
}
