#include <stdio.h>
int main()
{
  int i = 10;
  int *p = &i;
  printf("%d %d", *p++, *p);
  return 0;
}
