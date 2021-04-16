#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

#define SIZE 10

int main() {
  
  // Create a stack
  Stack* stack = CreateStack(SIZE);

  // Push an integer to the stack
  int n = 5;
  PushToStack(stack, &n);

  // Pop the integer from the stack
  int *result = (int*)PopFromStack(stack);

  // Print the integer
  printf("%d\n", *result);

  // Print capacity of the stack
  printf("Capacity = %d\n", stack->capacity);

  // Destroy stack
  DestroyStack(stack);

  return 0;
}
