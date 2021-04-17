from hash_table import *

# Create a hash table
hash_table = HashTable()

# Inser key/value pairs
hash_table.insert(25, "Melissa")
hash_table.insert(35, "Emmy")
hash_table.insert(1000, "Joe")

# Display the hash table
hash_table.display()

# Search for a key/value pair
hash_table.search(35, "Emmy")
