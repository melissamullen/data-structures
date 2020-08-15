all: run

run: example.c linked_list.o
	gcc -g example.c linked_list.c -o example

linked_list.o: linked_list.h linked_list.c
	gcc -c linked_list.c

clean:
	rm *.o
	rm example
