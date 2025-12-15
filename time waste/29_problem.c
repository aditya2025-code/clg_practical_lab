#include <stdio.h>
int main()
{
  auto int x = 10;
  {
    register int x = 20;
    printf("%d ", x);
  }
  printf("%d", x);
  return 0;
}
