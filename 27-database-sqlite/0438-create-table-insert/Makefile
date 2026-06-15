CXXFLAGS ?= -Wall -Wextra -std=c++23

create-table-insert: main.cpp
	$(CXX) $(CXXFLAGS) -o create-table-insert main.cpp -lsqlite3

clean:
	rm -f create-table-insert

.PHONY: clean
