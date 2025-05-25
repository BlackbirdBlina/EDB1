# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Calculando o tempo de busca" C++ Application

#Created by Sabrina Barbosa 24/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o desempenho.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

imprimir.o: desempenho.hpp desempenho.cpp

	$(CC) $(CPPFLAGS) -c desempenho.cpp

clean:
	rm -f $(PROG) $(OBJS)
