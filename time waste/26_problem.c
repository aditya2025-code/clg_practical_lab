#include <stdio.h>
int main()
{
  int arr[] = {10, 20, 30};
  int *p = arr;
  printf("%d %d", *p, *(p + 1));
  return 0;
}
