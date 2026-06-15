#include <nlohmann/json.hpp>
#include <iostream>
using json = nlohmann::json;

int main() {
    json person;
    person["age"] = 30;
    person["name"] = "alice";
    std::cout << person.dump() << "\n";
}
