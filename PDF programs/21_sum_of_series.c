/*
21.	Sum of series: 1 + 1/2 + 1/3 + … + 1/n
Write a C program using a loop to compute the sum of the harmonic series up to n terms (use float or double).
*/
#include <stdio.h>

int main()
{
  float i, n, sum = 0;
  printf("Enter the n value: ");
  scanf("%f", &n);
  for (i = 1.0; i <= n; i++)
  {
    sum += (1.0 / i);
  }
  printf("SUM = %.2f", sum);
  return 0;
}
// OUTPUT:
/*
Enter the n value: 4
SUM = 2.083333
*/