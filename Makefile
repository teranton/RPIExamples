CC=gcc
CFLAGS= -I -Wall
EXE_NAME=APP
all: main.c some.c
	$(CC) -o $(EXE_NAME) main.o some.o $(CLAGS)