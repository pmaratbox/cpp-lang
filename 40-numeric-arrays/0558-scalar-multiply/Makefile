CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include/eigen3

scalar-multiply: main.cpp
	$(CXX) $(CXXFLAGS) -o scalar-multiply main.cpp

clean:
	rm -f scalar-multiply

.PHONY: clean
