CXX := g++
CXXFLAGS := -Wall -std=c++11

src := main.cpp
target := build/main

.PHONY: all clean

all: $(target)

$(target): main.cpp lib/solution.hpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(target)

clean:
	rm $(target)
