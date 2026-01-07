// 57. Write a C program to find maximum and minimum elements of an array.

#include <stdio.h>

int main()
{
  int n;
  printf("Enter the array size: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the array element: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int max = a[0], min = a[0];
  for (int i = 0; i < n; i++)
  {
    if (max < a[i])
      max = a[i];
    if (min > a[i])
      min = a[i];
  }
  printf("Maximum element = %d\nMinimum element = %d", max, min);
  return 0;
}

// OUTPUT:
/*
Enter the array size: 5
Enter the array element: 80 90 80 69 71
Maximum element = 90
Minimum element = 69
*/