# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "EDB1 - Bubble Sort" C++ Application

#Created by Sabrina Barbosa 21/06/2025

PROG = programa

CC = g++

SRC = src
INC = includes
TEST = testes

CPPFLAGS = -Iincludes -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o bubbleSort.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

bubbleSort.o: $(INC)/bubbleSort.hpp $(SRC)/bubbleSort.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/bubbleSort.cpp

clean:
	rm -f $(PROG) $(OBJS)
