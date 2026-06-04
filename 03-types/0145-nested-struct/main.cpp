#include <iostream>
#include <string>

struct Address {
    std::string city;
};

struct Person {
    std::string name;
    Address address;
};

int main() {
    Person person{"Alice", {"London"}};
    std::cout << person.address.city << '\n';
    return 0;
}
