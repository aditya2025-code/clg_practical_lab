// Q34. Write a[n] C program to read an array of N elements and find max, min, sum, average.

#include <stdio.h>

int main()
{
  int n;
  printf("Enter the array size: ");
  scanf("%d", &n);
  int a[n], sum = 0, avg, max = 0, min = 999999999;
  printf("Enter the array element: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (max < a[i])
      max = a[i];
    if (min > a[i])
      min = a[i];
    sum += a[i];
  }
  avg = sum / n;
  printf("Maximum element = %d\nMinimum element = %d\nSum = %d\nAverage = %d", max, min, sum, avg);
  return 0;
}

// OUTPUT:
/*
Enter the array size: 5
Enter the array element: 80 90 80 70 70
Maximum element = 90
Minimum element = 70
Sum = 390
Average = 78
*/