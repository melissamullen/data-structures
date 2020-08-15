#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linked_list.h"

LinkedList* Create() {
  LinkedList* linked_list = (LinkedList*)malloc(sizeof(LinkedList));
  linked_list->first_node = NULL;
  return linked_list;
}

Node* CreateNode(void* data, size_t data_size) {
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = malloc(data_size);
  int i;
  for (i = 0; i < data_size; i++) {
    *(char*)(node->data + i) = *(char*)(data + i);
  }
  node->next = NULL;
  return node;
}

void Push(LinkedList* linked_list, Node* node) {
  if (linked_list->first_node != NULL) {
    node->next = linked_list->first_node;
  }
  linked_list->first_node = node;
}

void DestroyNode(Node* node) {
  node->data = NULL;
  node->next = NULL;
  free(node);
}

void Destroy(LinkedList* linked_list) {
  while (linked_list->first_node != NULL) {
    Node* first_node = Pop(linked_list);
    DestroyNode(first_node);
  }
  free(linked_list);
}

Node* Pop(LinkedList* linked_list) {
  Node* node = linked_list->first_node;
  linked_list->first_node = linked_list->first_node->next;
  return node;
}

void PrintLinkedList(LinkedList* linked_list, void (*fptr)(void*)) {
  Node* head = linked_list->first_node;
  while (head != NULL) {
    (*fptr)(head->data);
    head = head->next;
  }
  printf("\n");
}

void PrintInt(void *n) {
  printf("%d ", *(int*)n);
}

