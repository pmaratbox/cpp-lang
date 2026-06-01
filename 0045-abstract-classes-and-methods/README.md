# 0045 — Abstract Classes & Methods

Define an abstract `Shape` with an abstract `area` and a concrete `describe` that uses it, then implement a `Square` of side 3 and print `area: 9`. A *pure virtual* method (`= 0`) makes `Shape` abstract — it cannot be instantiated — and forces `Square` to override `area`. The non-virtual `describe` calls `area` through the vtable.

## Run

    make && ./shapes
