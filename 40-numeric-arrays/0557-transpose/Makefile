CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include/eigen3

transpose: main.cpp
	$(CXX) $(CXXFLAGS) -o transpose main.cpp

clean:
	rm -f transpose

.PHONY: clean
