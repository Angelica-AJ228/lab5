CC = gcc
CFLAGS = -Wall -g

SRC = src/main.c src/arreglo.c
OBJ = main

all: $(OBJ)

main: $(SRC)
	$(CC) $(CFLAGS) -o main $(SRC)

valgrind: main
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./main

clean:
	rm -f main


