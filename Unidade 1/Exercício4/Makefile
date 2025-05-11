# Makefile
CXX      := g++
CXXFLAGS := -Iinclude_cpp -std=c++17 -Wall

# Make expande os arquivos .cpp
SRCS_CPP := $(wildcard src_cpp/*.cpp)

.PHONY: all clean test_algorithms_cpp

all: test_algorithms_cpp

test_algorithms_cpp:
	$(CXX) $(CXXFLAGS) $(SRCS_CPP) test_cpp/test_algorithms.cpp -o test_algorithms_cpp
	./test_algorithms_cpp

clean:
	rm -f test_algorithms_cpp
