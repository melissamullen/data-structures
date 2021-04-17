# Array

**Definition**

* An array is a linear data structure in which elements are stored in contiguous memory locations.
* The array name is a pointer to the address of the first element in the array.
* Advantages:
    * Direct access via index is possible in O(1) time.
* Disadvantages:
    * Arrays are not dynamically sized – the size must be initialized at compile time.
    * Array insertion and deletion can be costly since elements must be shifted in memory.
    
**Arrays in Python**

* Python does not have built-in support for arrays.
* Alternatives:
    * The [array](https://docs.python.org/3/library/array.html) module 
    * The [numpy](https://numpy.org/doc/stable/reference/generated/numpy.array.html) module
    * [List](https://docs.python.org/3/library/stdtypes.html#typesseq-list): A Python list is a collection of items which can contain elements of multiple data types.

# Dynamic Array

* A dynamic array is an array that automatically grows when we try to make an insertion and there is no space left in the array.
* The amortized runtime (average runtime per operation) of adding elements to a dynamic array is O(1). Reasoning:
   * After adding X elements, we have made 1 + 2 + 4 + 16 + X copies = X + X/2 + X/4 + X/8 + ... + 1 = 2X
   * Therefore, adding X elements will take roughly O(X), and adding 1 element will on average take O(1) time
