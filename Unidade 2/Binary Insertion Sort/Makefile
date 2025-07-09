# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Binary Insertion Sort" C++ Application

#Created by Sabrina Barbosa 08/07/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -Ofast -Wall -pedantic -std=c++17

OBJS = main.o binaryInsertionSort.o insertionSortMetrics.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

binaryInsertionSort.o: $(INC)/binaryInsertionSort.hpp $(SRC)/binaryInsertionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/binaryInsertionSort.cpp

insertionSortMetrics.o: $(INC)/insertionSortMetrics.hpp $(SRC)/insertionSortMetrics.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/insertionSortMetrics.cpp

clean:
	rm -f $(PROG) $(OBJS)
