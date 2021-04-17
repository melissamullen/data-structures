import array
import numpy as np
from dynamic_array import *

# Create an array using the array module
arr = array.array('i', [1, 2, 3, 4, 5])

# Create an array using the numpy module
np_arr = np.array([1, 2, 3, 4, 5, 6])

# Create a Python list
list = ["hello", True, 3, 4, 5, 6, 7]

# Create a dynamic array
dy_arr = DynamicArray()
dy_arr.append(22)
dy_arr.append(37)
dy_arr.append(45)
dy_arr.append(55)
dy_arr.append(61)
