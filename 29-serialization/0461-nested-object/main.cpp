#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using json = nlohmann::json;

struct Address {
    std::string city;
    int zip;
};

struct Person {
    Address address;
    std::string name;
};

int main() {
    Person p{Address{"oslo", 1000}, "alice"};

    json a;
    a["city"] = p.address.city;
    a["zip"] = p.address.zip;

    json j;
    j["address"] = a;
    j["name"] = p.name;

    std::cout << j.dump() << "\n";

    // round-trip parse to prove the real library is in use
    json parsed = json::parse(j.dump());
    (void)parsed;
}
