#include <iostream>
#include <stdio.h>

#include "linked_list.h"

int main() {
  LinkedList<int> list;

  list.Push(1);
  list.Push(2);
  list.Push(5);
  list.PrintLinkedList();
}
