class Node:

    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self):
        self.len = 0
        self.first_node = None

    def push(self, data):
        node = Node(data)
        node.data = data
        node.next = self.first_node
        self.first_node = node
        self.len = self.len + 1
 
    def pop(self):
        node = Node(self.first_node.data)
        self.first_node = self.first_node.next
        return node

    def print_linked_list(self):
        head = self.first_node
        while (head != None):
            print(head.data)
            head = head.next

