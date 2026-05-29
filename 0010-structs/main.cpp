#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person p{"Ada", 36};

    std::cout << "name: " << p.name << '\n';
    std::cout << "age: " << p.age << '\n';
    return 0;
}
