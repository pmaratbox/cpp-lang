CXXFLAGS ?= -Wall -Wextra -std=c++23

batch-insert: main.cpp
	$(CXX) $(CXXFLAGS) -o batch-insert main.cpp -lsqlite3

clean:
	rm -f batch-insert

.PHONY: clean
