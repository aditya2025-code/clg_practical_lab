#include <stdio.h>

int main()
{
  int a = 1, b = 0;
  while (a <= 10)
  {
    b += a;
    a++;
  }
  printf("The sum of N number is %d", b);
  return 0;
}