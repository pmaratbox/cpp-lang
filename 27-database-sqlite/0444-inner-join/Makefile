CXXFLAGS ?= -Wall -Wextra -std=c++23

inner-join: main.cpp
	$(CXX) $(CXXFLAGS) -o inner-join main.cpp -lsqlite3

clean:
	rm -f inner-join

.PHONY: clean
