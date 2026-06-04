# 0154 — Polymorphic Area

Sum the areas of a Rectangle(2,3)=6 and a Triangle(base=4,height=4)=8 through a common Shape interface, printing `total area: 14`. A pure-virtual `area()` plus `std::unique_ptr<Shape>` gives runtime polymorphism with owning pointers.

## Run

    make && ./area
