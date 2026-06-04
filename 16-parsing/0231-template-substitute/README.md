# 0231 — Template Substitution

Substitute the variable in the template "hi {name}" with name="Ada", printing `hi Ada`. We scan for `{`...`}` spans and look the key up in a `std::map`.

## Run

    make && ./templatesubstitute
