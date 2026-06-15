CXXFLAGS ?= -Wall -Wextra -std=c++23

upsert: main.cpp
	$(CXX) $(CXXFLAGS) -o upsert main.cpp -lsqlite3

clean:
	rm -f upsert

.PHONY: clean
