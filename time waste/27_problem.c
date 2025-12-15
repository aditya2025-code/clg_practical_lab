#include <stdio.h>
void change(int **p)
{
  static int a = 20;
  *p = &a;
}
int main()
{
  int a = 10;
  int *p = &a;
  change(&p);
  printf("%d", *p);
  return 0;
}
