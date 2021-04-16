all: run

run: example.c stack.o ../linked_list/linked_list.o
	gcc -g example.c stack.c ../linked_list/linked_list.c -o example 

stack.o: stack.h stack.c ../linked_list/linked_list.o
	gcc -c stack.c

clean:
	rm *.o
	rm example
