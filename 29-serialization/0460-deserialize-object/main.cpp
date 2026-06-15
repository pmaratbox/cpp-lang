#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
using json = nlohmann::json;

struct Person {
    int age;
    std::string name;
};

int main() {
    json j = json::parse(R"({"age":30,"name":"alice"})");
    Person p{j.at("age").get<int>(), j.at("name").get<std::string>()};
    std::cout << p.name << " " << p.age << "\n";
}
