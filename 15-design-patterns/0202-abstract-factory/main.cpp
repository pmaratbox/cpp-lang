#include <iostream>
#include <memory>
#include <string>

struct Button { virtual ~Button() = default; virtual std::string label() const = 0; };
struct Checkbox { virtual ~Checkbox() = default; virtual std::string label() const = 0; };

struct DarkButton : Button { std::string label() const override { return "dark-button"; } };
struct DarkCheckbox : Checkbox { std::string label() const override { return "dark-checkbox"; } };

struct ThemeFactory {
    virtual ~ThemeFactory() = default;
    virtual std::unique_ptr<Button> createButton() const = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() const = 0;
};

struct DarkFactory : ThemeFactory {
    std::unique_ptr<Button> createButton() const override { return std::make_unique<DarkButton>(); }
    std::unique_ptr<Checkbox> createCheckbox() const override { return std::make_unique<DarkCheckbox>(); }
};

int main() {
    DarkFactory f;
    auto b = f.createButton();
    auto c = f.createCheckbox();
    std::cout << b->label() << ' ' << c->label() << '\n';
}
