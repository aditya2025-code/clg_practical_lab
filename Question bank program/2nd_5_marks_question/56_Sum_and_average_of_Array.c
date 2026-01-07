// 56. Write a C program to read N integers into an array and print sum and average.
#include <stdio.h>
int main()
{
  int n;
  printf("Enter The Array size: ");
  scanf("%d", &n);
  int a[n], sum = 0;
  printf("Enter The Array element: ");
  for (int i = 0; i <= n - 1; i++)
  {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  printf("Sum = %d\nAverage = %d", sum, sum / n);
  return 0;
}
// OUTPUT:
/*
Enter The Array size: 5
Enter The Array element: 50 55 60 50 50
Sum = 265
Average = 53
*/