#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linked_list.h"

int main() {

  // Create a linked list
  LinkedList* linked_list = Create();

  // Add integers to the linked list
  int a = 10;
  Node* node = CreateNode(&a, sizeof(int));  
  Push(linked_list, node);

  int b = 22;
  node = CreateNode(&b, sizeof(int));
  Push(linked_list, node);

  // Print the linked list
  PrintLinkedList(linked_list, PrintInt);

  // Destroy the linked list
  Destroy(linked_list);
}
