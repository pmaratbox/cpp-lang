# 0015 — Interfaces

Define a `Shape` interface with `name()` and `area()` methods, implement it for a rectangle and a square, then loop over a collection of shapes and print each one's area. In C++ an interface is an *abstract base class*: `Shape` declares pure virtual functions (`= 0`) and a virtual destructor, and each derived class marks its definitions `override`. Because the concrete types differ in size, the collection holds `std::unique_ptr<Shape>` — calling through a base pointer uses the vtable for dynamic dispatch, and the smart pointers free each object automatically.

## Run

    make && ./interfaces
