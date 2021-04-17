class Array:

    def __init__(self, data=None):
        if data is None:
            data = []
        self.data = data

    def push(self, data):
        self.data.append(data)

    def pop(self):
        result = self.data[0]
        for i in range(0, len(self.data)-1):
            self.data[i] = self.data[i+1]
            i = i + 1
        self.data[-1] = None
        return result
    
    def print_array(self):
        i = 0
        while self.data[i] != None:
            print(str(self.data[i]) + " ")
            i = i + 1
