CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include

serialize-object: main.cpp
	$(CXX) $(CXXFLAGS) -o serialize-object main.cpp

clean:
	rm -f serialize-object

.PHONY: clean
