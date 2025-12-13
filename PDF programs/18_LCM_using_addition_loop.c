/*
18.	LCM using repeated addition / loop
Write a C program to find the LCM of two numbers using loops (by checking multiples).
*/
#include <stdio.h>
int main()
{
  int a, b, x, y;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  x = a;
  y = b;
  while (a != b)
  {
    if (a < b)
      a += x;
    else
      b += y;
  }
  printf("LCM of %d & %d = %d", x, y, a);
  return 0;
}
// OUTPUT:
/*
Enter two number: 24 30
LCM of 24 & 30 = 120
*/