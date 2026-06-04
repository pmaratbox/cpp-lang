#include <iostream>
#include <vector>

class MinStack {
public:
    void push(int v) {
        data_.push_back(v);
        if (mins_.empty() || v <= mins_.back())
            mins_.push_back(v);
        else
            mins_.push_back(mins_.back());
    }

    int getMin() const { return mins_.back(); }

private:
    std::vector<int> data_;
    std::vector<int> mins_;
};

int main() {
    MinStack s;
    s.push(3);
    s.push(1);
    s.push(2);
    std::cout << "min: " << s.getMin() << '\n';
    return 0;
}
