# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Merge Sort" C++ Application

#Created by Sabrina Barbosa 21/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o mergeSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

mergeSort.o: $(INC)/mergeSort.hpp $(SRC)/mergeSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/mergeSort.cpp

clean:
	rm -f $(PROG) $(OBJS)
