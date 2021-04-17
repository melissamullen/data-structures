class DynamicArray:

    def __init__(self):
        self.size = 0
        self.capacity = 1
        self.array = self._create_array(self.capacity)

    def _create_array(self, length):
        return [None] * length

    def _resize(self, new_capacity):
        print("Resizing from " + str(self.capacity) + " to " + str(new_capacity))
        new_array = self._create_array(new_capacity)
        for i in range(self.size):
            new_array[i] = self.array[i]

        self.array = new_array
        self.capacity = new_capacity

    def append(self, element):
        if self.size == self.capacity:
            self._resize(2 * self.capacity)
        self.array[self.size] = element
        self.size = self.size + 1
        print("Appended element: " + str(element))
        print(self.array)

    def pop(self):
        if self.size > 0:
            element = self.array[self.size - 1]
            self.array[self.size - 1] = None
            self.size = self.size - 1
            if self.size <= self.capactity / 4:
                self._resize(self.capacity / 2)
        return element

