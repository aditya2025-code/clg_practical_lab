#include <stdio.h>
int main()
{
  int i = 1, product = 1, n;
  scanf("%d", &n);
  while (i <= n)
  {
    product *= i;
    i++;
  }
  printf("The factorial value of %d is %d", n, product);
  return 0;
}