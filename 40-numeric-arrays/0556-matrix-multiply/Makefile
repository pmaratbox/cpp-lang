CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include/eigen3

matrix-multiply: main.cpp
	$(CXX) $(CXXFLAGS) -o matrix-multiply main.cpp

clean:
	rm -f matrix-multiply

.PHONY: clean
