#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using json = nlohmann::json;

struct Person {
    std::string fullName; // code field name differs from JSON key
};

// Map the code field `fullName` to the JSON key `full_name`.
void to_json(json& j, const Person& p) {
    j = json{{"full_name", p.fullName}};
}

void from_json(const json& j, Person& p) {
    j.at("full_name").get_to(p.fullName);
}

int main() {
    Person p{"alice"};
    json j = p;
    std::cout << j.dump() << "\n";
}
