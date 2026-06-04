# 0202 — Abstract Factory

Use a "dark" theme abstract factory to build a button and a checkbox, printing `dark-button dark-checkbox`. A `ThemeFactory` abstract base returns `unique_ptr` products whose labels carry the theme prefix.

## Run

    make && ./abstractfactory
