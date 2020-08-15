#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node Node;

typedef struct node {
  void* data;
  Node* next;
} Node;

typedef struct linked_list LinkedList;

typedef struct linked_list {
  Node* first_node;
} LinkedList;

LinkedList* Create();

Node* CreateNode(void* data, size_t data_size);

void Push(LinkedList* linked_list, Node* node);

Node* Pop(LinkedList* linked_list);

void Destroy(LinkedList* linked_list);

void PrintLinkedList(LinkedList* linked_list, void (*fptr)(void*));

void PrintInt(void *n);

#endif
