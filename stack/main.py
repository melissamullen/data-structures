from stack import *

# Create stack object
stack = Stack(10)

# Push values to stack
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.push(5)

# Pop value from stack
n = stack.pop()

# Print popped value
print(n)

# Print rest of stack
stack.print_stack()
