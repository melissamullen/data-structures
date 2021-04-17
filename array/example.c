#include <stdio.h>

int main() {

  // Define array of integers
  int array[] = {1,2,3,4,5};

  // Access value via index in O(1) time
  int value = array[2];
  printf("Access value at index 2: %d\n", value);

  // Array name is a pointer to the address of the first element in the array
  int *ptr = array;
  int first_element = *ptr;
  printf("First element is: %d\n", first_element);

  return 0;
}
