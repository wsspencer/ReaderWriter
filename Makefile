# build an executable file named main from main.c, reader.c, writer.c, reader.h, and writer.h
CFLAGS = -Wall -std=c99

main: main.o reader.o writer.o
	gcc main.o reader.o writer.o -o main

main.o: main.c reader.h writer.h
	gcc -Wall -std=c99 -c -o main.o main.c

reader.o: reader.c reader.h
	gcc -Wall -std=c99 -c -o reader.o reader.c

writer.o: writer.c writer.h
	gcc -Wall -std=c99 -c -o writer.o writer.c
