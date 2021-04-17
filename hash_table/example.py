from hash_table import *

hash_table = HashTable()
hash_table.insert(25, "Melissa")
hash_table.insert(35, "Emmy")
hash_table.insert(1000, "Joe")
hash_table.display()

# Search for a key/value pair
hash_table.search(35, "Emmy")
