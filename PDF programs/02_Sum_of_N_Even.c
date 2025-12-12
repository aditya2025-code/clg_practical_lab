/*
2.	Sum of even numbers up to N
Write a C program to input n and find the sum of all even numbers from 1 to n using a loop.
*/
#include <stdio.h>
void main()
{
  int i, n, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      sum += i;
  }
  printf("SUM = %d", sum);
}
//OUTPUT:
/*
Enter the number: 10
SUM = 30
*/