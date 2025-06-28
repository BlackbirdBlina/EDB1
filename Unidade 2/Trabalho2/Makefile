# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Sorts" C++ Application

#Created by Sabrina Barbosa 28/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o selectionSort.o quickSort.o mergeSort.o insertionSort.o bubbleSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

selectionSort.o: $(INC)/selectionSort.hpp $(SRC)/selectionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/selectionSort.cpp

quickSort.o: $(INC)/quickSort.hpp $(SRC)/quickSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/quickSort.cpp

mergeSort.o: $(INC)/mergeSort.hpp $(SRC)/mergeSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/mergeSort.cpp

insertionSort.o: $(INC)/insertionSort.hpp $(SRC)/insertionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/insertionSort.cpp

bubbleSort.o: $(INC)/bubbleSort.hpp $(SRC)/bubbleSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/bubbleSort.cpp
	
clean:
	rm -f $(PROG) $(OBJS)
