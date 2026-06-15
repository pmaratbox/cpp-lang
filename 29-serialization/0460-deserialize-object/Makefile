CXXFLAGS ?= -Wall -Wextra -std=c++23 -I/opt/homebrew/include

deserialize-object: main.cpp
	$(CXX) $(CXXFLAGS) -o deserialize-object main.cpp

clean:
	rm -f deserialize-object

.PHONY: clean
