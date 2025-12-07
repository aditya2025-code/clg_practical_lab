#include <stdio.h>

int sum_of_natural_number(int);

int sum_of_natural_number(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return sum_of_natural_number(n - 1) + n;
}

int main()
{
  printf("The sum of frist natural number is %d", sum_of_natural_number(6));
  return 0;
}