/*
16.	Fibonacci series (first N terms)
Write a C program to print the first n Fibonacci numbers using a loop.
*/
#include <stdio.h>

int main()
{
  int i, n;
  double a = 0, b = 1, c;
  printf("Enter the N term: ");
  scanf("%d", &n);
  printf("%d Fibonacci are %.0lf %.0lf", n, a, b);
  for (i = 3; i <= n; i++)
  {
    c = a + b;
    printf(" %.0lf", c);
    a = b;
    b = c;
  }
  return 0;
}
// OUTPUT:
/*
Enter the N term: 10
10 Fibonacci are 0 1 1 2 3 5 8 13 21 34
*/