#include <iostream>
#include <stdio.h>

#include "linked_list.h"

int main() {
  // Create an integer implementation of linked list 
  LinkedList<int> list;

  // Push values to linked list
  list.Push(1);
  list.Push(2);
  list.Push(5);
  
  // Print linked list
  list.PrintLinkedList();
}
