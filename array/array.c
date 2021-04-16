#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "array.h"

void PrintArray(int array[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
}
