CXXFLAGS ?= -Wall -Wextra -std=c++23

aggregate-functions: main.cpp
	$(CXX) $(CXXFLAGS) -o aggregate-functions main.cpp -lsqlite3

clean:
	rm -f aggregate-functions

.PHONY: clean
