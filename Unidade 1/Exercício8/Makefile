# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "EDB1 - Encontrando o próximo ano bissexto" C++ Application

#Created by Sabrina Barbosa 25/05/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o anoBissexto.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp

	$(CC) $(CPPFLAGS) -c main.cpp

anoBissexto.o: anoBissexto.hpp anoBissexto.cpp

	$(CC) $(CPPFLAGS) -c anoBissexto.cpp

clean:
	rm -f $(PROG) $(OBJS)
