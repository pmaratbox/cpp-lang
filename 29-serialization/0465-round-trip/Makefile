CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include

round-trip: main.cpp
	$(CXX) $(CXXFLAGS) -o round-trip main.cpp

clean:
	rm -f round-trip

.PHONY: clean
