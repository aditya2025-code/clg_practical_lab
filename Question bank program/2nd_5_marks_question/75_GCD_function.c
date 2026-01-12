// 75. Write a C program using a function to compute GCD of two numbers (Euclid method).
#include <stdio.h>
int isGCD(int a, int b)
{
  int swap, rem = 1;
  if (a < b)
  {
    swap = a;
    a = b;
    b = swap;
  }
  do
  {
    rem = a % b;
    if (rem == 0)
      break;
    else
    {
      a = b;
      b = rem;
    }
  } while (rem != 0);
  return b;
}
int main()
{
  int x, y, result;
  printf("Enter two number: ");
  scanf("%d %d", &x, &y);
  result = isGCD(x, y);
  printf("GCD of %d & %d = %d", x, y, result);
  return 0;
}
// OUTPUT:
/*
Enter two number: 36 60
GCD of 36 & 60 = 12
*/