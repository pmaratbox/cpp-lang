CXXFLAGS ?= -Wall -Wextra -std=c++23

parameterized-query: main.cpp
	$(CXX) $(CXXFLAGS) -o parameterized-query main.cpp -lsqlite3

clean:
	rm -f parameterized-query

.PHONY: clean
