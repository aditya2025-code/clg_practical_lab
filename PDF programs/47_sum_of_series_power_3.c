/*
47.	Sum of series: 1³ + 2³ + 3³ + … + n³
Write a C program to find the sum of cubes of first n natural numbers using a loop.
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
    for (int j = 1; j <= 3; j++)
      power *= i;
    sum += power;
  }
  printf("SUM = %d", sum);
  return 0;
}
//OUTPUT:
/*
Enter the range: 4
SUM = 100
*/