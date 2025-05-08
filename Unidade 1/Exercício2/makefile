# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Contagem regressiva" C++ Application

#Created by Sabrina Barbosa 07/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o imprimir.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

imprimir.o: imprimir.h imprimir.cpp

	$(CC) $(CPPFLAGS) -c imprimir.cpp

clean:
	rm -f $(PROG) $(OBJS)
