# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Insertion Sort" C++ Application

#Created by Sabrina Barbosa 18/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o insertionSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

insertionSort.o: $(INC)/insertionSort.hpp $(SRC)/insertionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/insertionSort.cpp

clean:
	rm -f $(PROG) $(OBJS)
