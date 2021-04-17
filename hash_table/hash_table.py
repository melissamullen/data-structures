class HashTable:

    def __init__(self, size=10):
        self.size = size
        self.hash_table = [[] for _ in range(self.size)]

    def hash_function(self, key):
        return key % self.size

    def insert(self, key, value):
        hash = self.hash_function(key)
        self.hash_table[hash].append(value)

    def search(self, key, value):
        index = self.hash_function(key)
        for name in self.hash_table[index]:
            if name == value:
                print("Found!")
                return
        print("Not Found.")
        return

    def display(self):
        for i in range(self.size):
            print(i, end = " ")
            
            for row in self.hash_table[i]:
                print("-->", end = " ")
                print(row, end = " ")

            print()

