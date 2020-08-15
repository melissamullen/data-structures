#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// A structure to represent a node of a linked list
typedef struct node Node;

typedef struct node {
  void* data;
  Node* next;
} Node;

// A structure to represent a linked list
typedef struct linked_list LinkedList;

typedef struct linked_list {
  Node* first_node;
} LinkedList;

// A function to create a linked list
LinkedList* Create();

// A function to create a node for a linked list
Node* CreateNode(void* data, size_t data_size);

// A function to add a node to the linked list
void Push(LinkedList* linked_list, Node* node);

// A function to remove and return the first node in the linked list
Node* Pop(LinkedList* linked_list);

// A function to destroy the linked list
void Destroy(LinkedList* linked_list);

// A function to print the linked list
void PrintLinkedList(LinkedList* linked_list, void (*fptr)(void*));

// A function to print an integer
void PrintInt(void *n);

#endif
