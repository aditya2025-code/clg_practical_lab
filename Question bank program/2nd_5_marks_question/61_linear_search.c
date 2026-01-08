// 61. Write a C program for linear search and print the index if found, otherwise print “Not Found”.
#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], search;
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
    {
      printf("%d is found at index %d", search, i);
      return 0;
    }
  }
  printf("%d is not found", search);
  return 0;
}
// OUTPUT1:
/*
Enter array size: 5
Enter 5 numbers: 1 2 6 7 9

Now enter the searching element: 6
6 is found at index 2
*/