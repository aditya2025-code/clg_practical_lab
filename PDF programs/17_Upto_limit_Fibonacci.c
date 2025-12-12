/*
17.	Fibonacci series up to a limit
Write a C program to print all Fibonacci numbers less than or equal to a given number n using a loop.
*/
#include <stdio.h>

int main()
{
  int i, n;
  double a = 0, b = 1, c = 0;
  printf("Enter the Range: ");
  scanf("%d", &n);
  printf("%d Fibonacci are %.0lf %.0lf", n, a, b);
  for (i = 3; i <= n; i++)
  {
    c = a + b;
    if (c >= n)
      break;
    printf(" %.0lf", c);
    a = b;
    b = c;
  }
  return 0;
}
// OUTPUT:
/*
Enter the Range: 60
60 Fibonacci are 0 1 1 2 3 5 8 13 21 34 55
*/