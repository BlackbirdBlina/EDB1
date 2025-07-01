# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Sorts" C++ Application

#Created by Sabrina Barbosa 28/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -Ofast -Wall -pedantic -std=c++17

OBJS = main.o selectionSort.o quickSort.o mergeSort.o insertionSort.o bubbleSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

selectionSort.o: $(INC)/selectionSortMetrics.hpp $(SRC)/selectionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/selectionSort.cpp

quickSort.o: $(INC)/quickSortMetrics.hpp $(SRC)/quickSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/quickSort.cpp

mergeSort.o: $(INC)/mergeSortMetrics.hpp $(SRC)/mergeSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/mergeSort.cpp

insertionSort.o: $(INC)/insertionSortMetrics.hpp $(SRC)/insertionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/insertionSort.cpp

bubbleSort.o: $(INC)/bubbleSortMetrics.hpp $(SRC)/bubbleSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/bubbleSort.cpp

clean:
	rm -f $(PROG) $(OBJS)
