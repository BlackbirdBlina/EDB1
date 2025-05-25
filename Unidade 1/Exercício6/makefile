# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Multiplicando através de somas sucessivas" C++ Application

#Created by Sabrina Barbosa 24/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o multi.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

multi.o: multi.hpp multi.cpp

	$(CC) $(CPPFLAGS) -c multi.cpp

clean:
	rm -f $(PROG) $(OBJS)
