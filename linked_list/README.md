# Linked List

**Definition**

* A linked list is a linear data structure in which elements are *not* stored in contiguous memory locations.
* A linked list is made up of nodes. Each node contains a piece of data and a pointer to the next node.
* Advantages:
     * Linked lists are dynamically sized – they can grow and shrink at runtime.
     * Linked lists allow for easy insertion and deletion.
* Disadvantages:
     * Linked lists require more memory than arrays.
     * Linked list traversal takes more time than array traversal – direct access via index is not possible.
     * Singly linked lists do not allow for reverse traversal.

**Files**

* *linked_list.c:*

     A source file containing functions that implement a linked list.

* *linked_list.h:*

     A header file containing function headers for a linked list.
    
* *example.c:*

     An example usage of the linked list implementation using integers.
     
**Build Instructions**

`make`

`./example`
