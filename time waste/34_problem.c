#include <stdio.h>
void fun()
{
  static int i = 0;
  if (i < 5)
  {
    i++;
    fun();
    printf("%d ", i);
  }
}
int main()
{
  fun();
  return 0;
}
