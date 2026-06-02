#include <iostream>
#include <string>

class Animal {
public:
    virtual std::string speak() const {
        return "some sound";
    }
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    std::string speak() const override {
        return "Woof";
    }
};

int main() {
    Animal animal;
    Dog dog;
    std::cout << "animal: " << animal.speak() << '\n';
    std::cout << "dog: " << dog.speak() << '\n';
    return 0;
}
