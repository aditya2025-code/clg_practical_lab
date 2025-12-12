/*
1.	Sum of first N natural numbers
Write a C program to input a positive integer n and find the sum 1 + 2 + … + n using a loop.
*/
#include <stdio.h>
void main()
{
  int i, n, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("SUM = %d", sum);
}
// OUTPUT:
/*
Enter the number: 5
SUM = 15
*/