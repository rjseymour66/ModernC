justify: justify.o word.o line.o
	cc -o justify justify.c word.c line.c

justify.o: justify.c word.h line.h
	cc -c justify.c 

word.o: word.c word.h
	cc -c word.c 

line.o: line.c line.h
	cc -c line.c