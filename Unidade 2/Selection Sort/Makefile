# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Selection Sort" C++ Application

#Created by Sabrina Barbosa 18/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o selectionSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

selectionSort.o: $(INC)/selectionSort.hpp $(SRC)/selectionSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/selectionSort.cpp

clean:
	rm -f $(PROG) $(OBJS)
