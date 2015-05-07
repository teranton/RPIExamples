CC=gcc
CFLAGS=-I.
DEPS = operations.h
OBJ = main.o operations.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

harj1: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

