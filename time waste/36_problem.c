#include <stdio.h>
#define INC(x) ++x
int main()
{
  int a = 5;
  printf("%d %d", INC(a), a);
  return 0;
}
