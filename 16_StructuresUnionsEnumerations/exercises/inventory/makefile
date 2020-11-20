CC=gcc

inventory: inventory.o readline.o
	$(CC) -o inventory inventory.o readline.c

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c

readline.o: readline.h readline.c
	$(CC) -c readline.h	readline.c