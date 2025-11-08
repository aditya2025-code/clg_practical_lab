#include <stdio.h>
int main()
{
  int product = 1, n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    product *= i;
  }
  printf("The factorial value of %d is %d\n", n, product);
  return 0;
}