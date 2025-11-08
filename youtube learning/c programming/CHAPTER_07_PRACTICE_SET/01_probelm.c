#include <stdio.h>

int main()
{
  int value[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *ptr = value;
  printf("The value at address %u is %d", ptr + 0, *ptr + 0);
  return 0;
}