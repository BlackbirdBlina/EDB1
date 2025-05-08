# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Fibonacci Number" C++ Application

#Created by Sabrina Barbosa 07/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o fib.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

fib.o: fib.h fib.cpp

	$(CC) $(CPPFLAGS) -c fib.cpp

clean:
	rm -f $(PROG) $(OBJS)
