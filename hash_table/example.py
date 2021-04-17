from hash_table import *

# Create a hash table
hash_table = HashTable()

# Insert key/value pairs
hash_table.insert(25, "Melissa")
hash_table.insert(35, "Emmy")
hash_table.insert(1000, "Joe")

# Display the hash table
hash_table.display()

# Search for a key/value pair
hash_table.search(35, "Emmy")

# Define my own hash function
def hash_function(self, key):
    return sum(ord(c) for c in key) - ord('a')
HashTable.hash_function = hash_function

# Create a hash table with new hash function
english_to_spanish = HashTable(405)
english_to_spanish.insert("Hello", "Hola")
english_to_spanish.display()
english_to_spanish.search("Hello", "Hola")
