CXX := g++
CXXFLAGS := -Wall -std=c++11

PROBLEM ?= 0

src := main.cpp
target := build/main

.PHONY: all clean archive new

all: $(target)

$(target): main.cpp lib/solution.hpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(target)

archive:
	mkdir -p archive/$(PROBLEM)
	cp lib/solution.hpp archive/$(PROBLEM)

new:
	cp template/solution.hpp lib/

clean:
	rm $(target)
