# Compiler, Linker Defines
CC = gcc
CFLAGS = -Iinclude/ -c -Wall

# Directories for objects and executables
BINDIR = bin/
OBJDIR = build/
SCRDIR = src/

all: main

main: main.o board.o
	$(CC) $(OBJDIR)main.o $(OBJDIR)board.o -o $(BINDIR)main_game

main.o: $(SCRDIR)main.c
	$(CC) $(CFLAGS) $(SCRDIR)main.c -o $(OBJDIR)main.o

board.o: $(SCRDIR)board.c
	$(CC) $(CFLAGS) $(SCRDIR)board.c -o $(OBJDIR)board.o