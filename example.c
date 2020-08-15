#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linked_list.h"

int main() {

  LinkedList* linked_list = Create();

  int a = 10;
  Node* node = CreateNode(&a, sizeof(int));  
  Push(linked_list, node);

  int b = 22;
  node = CreateNode(&b, sizeof(int));
  Push(linked_list, node);

  PrintLinkedList(linked_list, PrintInt);

  Destroy(linked_list);
}
