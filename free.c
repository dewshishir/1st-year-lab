#include <stdio.h>
int main() {
int* ptr = malloc(10 * sizeof(*ptr));
if (ptr != NULL){
  *(ptr + 2) = 50;
  printf("Value of the 2nd integer is %d",*(ptr + 2));
}
free(ptr);
}
