import sys
sys.path.append("../linked_list")
from linked_list import * 

class Stack:

    def __init__(self, capacity):
        self.capacity = capacity
        self.linked_list = LinkedList()

    def pop(self):
        return self.linked_list.pop().data
    
    def push(self, data):
        self.linked_list.push(data)

    def print_stack(self):
        self.linked_list.print_linked_list()
