/*
19.	GCD using repeated subtraction / loop
Write a C program to find the GCD of two numbers using loops (Euclidean algorithm with while).
*/
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  printf("GCD of %d & %d = ", a, b);
  while (a != b)
  {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  printf("%d", a);
  return 0;
}
// OUTPUT:
/*
Enter two number: 24 54
GCD of 24 & 54 = 6
*/