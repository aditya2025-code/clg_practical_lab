/*
11.	Power using repeated multiplication
Write a C program to compute a^b (a to the power b) using a loop (without using pow()).
*/
#include <stdio.h>
int main()
{
  int i, a, b, pow = 1;
  printf("First Enter number then power: ");
  scanf("%d %d", &a, &b);
  for (i = 1; i <= b; i++)
  {
    pow *= a;
  }
  printf("%d^%d = %d", a, b, pow);
  return 0;
}
// OUTPUT:
/*
First Enter number then power: 5 3
5^3 = 125
*/
