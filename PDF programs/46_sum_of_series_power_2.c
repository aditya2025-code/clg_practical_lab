/*
46.	Sum of series: 1² + 2² + 3² + … + n²
Write a C program to find the sum of squares of first n natural numbers using a loop.
*/
#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter the range: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int power = 1;
    for (int j = 1; j <= 2; j++)
      power *= i;
    sum += power;
  }
  printf("SUM = %d", sum);
  return 0;
}
// OUTPUT:
/*
Enter the range: 5
SUM = 55
*/