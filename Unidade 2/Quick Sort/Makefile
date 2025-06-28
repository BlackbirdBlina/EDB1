# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Quick Sort" C++ Application

#Created by Sabrina Barbosa 28/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o quickSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

quickSort.o: $(INC)/quickSort.hpp $(SRC)/quickSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/quickSort.cpp

clean:
	rm -f $(PROG) $(OBJS)
