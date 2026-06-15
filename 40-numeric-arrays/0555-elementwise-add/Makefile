CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include/eigen3

elementwise-add: main.cpp
	$(CXX) $(CXXFLAGS) -o elementwise-add main.cpp

clean:
	rm -f elementwise-add

.PHONY: clean
