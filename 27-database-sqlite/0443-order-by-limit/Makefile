CXXFLAGS ?= -Wall -Wextra -std=c++23

order-by-limit: main.cpp
	$(CXX) $(CXXFLAGS) -o order-by-limit main.cpp -lsqlite3

clean:
	rm -f order-by-limit

.PHONY: clean
