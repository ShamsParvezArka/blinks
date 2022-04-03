CC = gcc

output: main.c
	$(CC) -ggdb -o blinks main.c
