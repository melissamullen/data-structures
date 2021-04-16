#ifndef STACK_H
#define STACK_H

#include "../linked_list/linked_list.h"

typedef struct stack Stack;

typedef struct stack {
  int capacity;
  LinkedList* linked_list;  
} Stack;

// A function to create a stack
Stack* CreateStack(int capacity);

// A function to a data to the stack
void PushToStack(Stack* stack, void* data);

// A function to pop data off the stack
void* PopFromStack(Stack* stack);

// A function to destroy the stack
void DestroyStack(Stack* stack);

// A function to print the stack
void PrintStack(Stack* stack);

#endif
