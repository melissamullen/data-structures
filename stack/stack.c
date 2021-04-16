#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"
#include "../linked_list/linked_list.h"

Stack* CreateStack(int capacity) {
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  stack->top = NULL;
  stack->capacity = capacity;
  stack->linked_list = (void*)malloc(stack->capacity * sizeof(void*));
  return stack;
}

void PushToStack(Stack* stack, void* data) {
  Push(stack->linked_list, data);
  stack->capacity = stack->capacity + 1;
}

void* PopFromStack(Stack* stack) {
  void* data = Pop(stack->linked_list);
  return data;
}

void PrintStack(Stack* stack) {
  PrintLinkedList(stack->linked_list, PrintInt);
}

void DestroyStack(Stack* stack) {
  Destroy(stack->linked_list);
  free(stack);
}
