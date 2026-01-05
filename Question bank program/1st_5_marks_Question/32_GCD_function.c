// Q32. Write a C program using functions to compute GCD of two numbers (function + main).

#include <stdio.h>

int GCD(int a, int b)
{
  while (a != b)
  {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}
int main()
{
  int x, y;
  printf("Enter two number: ");
  scanf("%d %d", &x, &y);
  printf("GCD of %d and %d = %d", x, y, GCD(x, y));
  return 0;
}
// OUTPUT:
/*
Enter two number: 54 24
GCD of 54 and 24 = 6
*/