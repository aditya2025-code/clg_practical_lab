#include <stdio.h>
int main()
{
  char arr[] = "abc";
  char *p = "abc";
  printf("%lu %lu", sizeof(arr), sizeof(p));
  return 0;
}
