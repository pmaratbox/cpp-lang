#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people{{"alice", 30}, {"bob", 25}};

    std::sort(people.begin(), people.end(),
              [](const Person& a, const Person& b) { return a.age < b.age; });

    bool first = true;
    for (const auto& p : people) {
        if (!first) std::cout << ' ';
        std::cout << p.name;
        first = false;
    }
    std::cout << '\n';
}
