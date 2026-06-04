# 0350 — Static Factory Method

Use a static factory Color.fromHex("#ff0000") to build a color and print its components `255 0 0`. A `static` member function returns a constructed `Color`, parsing each hex pair with `std::stoi(..., 16)`.

## Run

    make && ./staticfactory
