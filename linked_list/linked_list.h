#include <stddef.h>

template<class T>
class LinkedList {

private:

  struct Node {
    T data;
    Node* next;
  };

  size_t len;
  Node* first_node;

public:

  LinkedList();
  ~LinkedList();

  void Push(T data);
//  T Pop(int index);
//  void Insert(T data, int index);
//  void Remove(int index);
  void PrintLinkedList();
};

template<class T>

LinkedList<T>::LinkedList() {
  len = 0;
  first_node = nullptr;
}

template<class T>

void LinkedList<T>::Push(T data) {
  Node* node = new Node();
  node->data = data;
  if (first_node != nullptr) {
    node->next = first_node;
  }
  first_node = node;
  len++;
}

template<class T>

void LinkedList<T>::PrintLinkedList() {
  Node* head = first_node;
  while (head != nullptr) {
    std::cout << head->data << " ";
    head = head->next;
  }
  std::cout << "\n";
}

template<class T>

LinkedList<T>::~LinkedList() {

  for (int i = 0; i < len; i++) {
    Node* tmp = first_node;
    delete tmp;
    first_node = first_node->next;
  }
  len = 0;

  delete first_node;
}

