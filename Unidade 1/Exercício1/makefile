# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Soma dos primeiros n números naturais" C++ Application

#Created by Sabrina Barbosa 07/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o soma.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

soma.o: soma.h soma.cpp

	$(CC) $(CPPFLAGS) -c soma.cpp

clean:
	rm -f $(PROG) $(OBJS)
