// 60. Write a C program to count frequency of a given element in an array.
#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], search, count = 0;
  printf("Enter %d numbers: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\nNow enter the searching element: ");
  scanf("%d", &search);
  for (int i = 0; i < n; i++)
  {
    if (search == a[i])
      count++;
  }
  printf("\nFrequency = %d", count);
  return 0;
}
// OUTPUT:
/*
Enter array size: 6
Enter 6 numbers: 1 2 2 2 2 1

Now enter the searching element: 2

Frequency = 4
*/