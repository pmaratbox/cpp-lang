CXXFLAGS ?= -Wall -Wextra -std=c++23

indexes: main.cpp
	$(CXX) $(CXXFLAGS) -o indexes main.cpp -lsqlite3

clean:
	rm -f indexes

.PHONY: clean
