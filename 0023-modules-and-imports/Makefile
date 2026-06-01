CXXFLAGS ?= -Wall -Wextra -std=c++23

modules: main.cpp mathutil.cpp mathutil.hpp
	$(CXX) $(CXXFLAGS) -o modules main.cpp mathutil.cpp

clean:
	rm -f modules

.PHONY: clean
