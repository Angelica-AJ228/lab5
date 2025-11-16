CC = gcc
CFLAGS = -Wall -g

SRC = src/main.c src/arreglo.c
OBJ = main

all: $(OBJ)

main: $(SRC)
	$(CC) $(CFLAGS) -o main $(SRC)

clean:
	rm -f main


