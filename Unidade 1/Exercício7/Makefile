# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Divisao inteira" C++ Application

#Created by Sabrina Barbosa 25/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o div.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

imprimir.o: div.hpp div.cpp

	$(CC) $(CPPFLAGS) -c div.cpp

clean:
	rm -f $(PROG) $(OBJS)
