#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
using json = nlohmann::json;

struct Person {
    int age;
    std::string name;
};

int main() {
    json j = json::parse(R"({"name":"alice"})");
    // age is absent: value(key, default) returns the fallback when the key is missing.
    Person p{j.value("age", 0), j.at("name").get<std::string>()};
    std::cout << p.name << " " << p.age << "\n";
}
