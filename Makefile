all: run

run: main.c linked_list.o
	gcc -g main.c linked_list.c -o example

linked_list.o: linked_list.h linked_list.c
	gcc -c linked_list.c

clean:
	rm *.o
	rm example
