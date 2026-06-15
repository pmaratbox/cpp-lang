CXXFLAGS ?= -Wall -Wextra -std=c++23

connect-and-query: main.cpp
	$(CXX) $(CXXFLAGS) -o connect-and-query main.cpp -lsqlite3

clean:
	rm -f connect-and-query

.PHONY: clean
