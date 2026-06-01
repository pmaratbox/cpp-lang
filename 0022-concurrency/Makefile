CXXFLAGS ?= -Wall -Wextra -std=c++23 -pthread

concurrency: main.cpp
	$(CXX) $(CXXFLAGS) -o concurrency main.cpp

clean:
	rm -f concurrency

.PHONY: clean
