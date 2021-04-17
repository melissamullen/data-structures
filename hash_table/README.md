# Hash Table

**Definition**

* A hash table is a data structure used to store key/value pairs.
* Keys are mapped to values (representing indices of an array) via a hash function.
* A hash function is any function which maps a data set of arbitrary size to a data set of fixed size.
* Collisions occur when pairs of keys are mapped to the same hash value. They should be avoided – if all n keys result in collisions, runtime for a lookup will be O(n).
* *Separate chaining* is one of the most commonly used collision resolution techniques. 
    * It is usually implemented using linked lists.
    * To store an element in the hash table, you must insert it into a specific linked list.
    * If there is a collision, then store both elements in the same linked list.
* Advantages:
    * Lookup, insertion, and deletion operations can be done in O(1) time.
* Disadvantages:
    * Inefficient when there are too many collisions
    * Do not accept null keys
* Typically the best data structure for storing a large amount of data, and the worst for storing a small amount of data (due to the cost of hashing).
    
**Hash Tables in Python**

* Python's implementation of the hash table is a [dictionary](https://docs.python.org/3/tutorial/datastructures.html#dictionaries).
