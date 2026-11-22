CXX = g++
CXXFLAGS = -std=c++23 -Wall -O2

all: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main
