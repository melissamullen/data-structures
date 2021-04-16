all: run

run: example.c array.o
	gcc -g example.c array.c -o example

array.o: array.h array.c
	gcc -c array.c

clean:
	rm *.o
	rm example

