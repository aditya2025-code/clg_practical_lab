/*
28.	Frequency of a given element in an array
Write a C program to count how many times a particular element appears in an array using a loop.
*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], search, count = 0;
  printf("Enter %d numbers: ",n);
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
Enter array size: 10
Enter 10 numbers: 1 2 3 4 5 5 6 5 7 5

Now enter the searching element: 5

Frequency = 4
*/