CXXFLAGS ?= -Wall -Wextra -std=c++23

update-delete: main.cpp
	$(CXX) $(CXXFLAGS) -o update-delete main.cpp -lsqlite3

clean:
	rm -f update-delete

.PHONY: clean
