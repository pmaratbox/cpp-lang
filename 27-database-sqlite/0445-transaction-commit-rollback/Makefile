CXXFLAGS ?= -Wall -Wextra -std=c++23

transaction-commit-rollback: main.cpp
	$(CXX) $(CXXFLAGS) -o transaction-commit-rollback main.cpp -lsqlite3

clean:
	rm -f transaction-commit-rollback

.PHONY: clean
