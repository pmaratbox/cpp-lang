#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using json = nlohmann::json;

struct Person {
    int age;
    std::string name;
};

int main() {
    Person p{30, "alice"};

    // serialize -> compact JSON, keys alphabetical (nlohmann sorts by default)
    json j;
    j["age"] = p.age;
    j["name"] = p.name;
    std::string text = j.dump();

    // deserialize back into a Person
    json parsed = json::parse(text);
    Person back{parsed.at("age").get<int>(), parsed.at("name").get<std::string>()};

    std::cout << back.name << "\n";
}
