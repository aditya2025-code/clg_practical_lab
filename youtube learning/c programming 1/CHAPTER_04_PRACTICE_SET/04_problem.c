#include <stdio.h>

int main()
{
  int a = 1, b = 0;
  do
  {
    b += a;
    a++;
  } while (a <= 10);
  printf("The sum of N number is %d", b);
  return 0;
}