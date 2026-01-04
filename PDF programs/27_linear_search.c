/*
27.	Linear search using loop
Write a C program to perform linear search in an array using a loop and indicate whether the element is found or not.
*/
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
      printf("%d is found at index %d\n", search, i);
  }
  return 0;
}
// OUTPUT:
/*
Enter array size: 10
Enter 10 numbers: 1 2 3 4 5 5 6 5 7 5

Now enter the searching element: 5
5 is found at index 4
5 is found at index 5
5 is found at index 7
5 is found at index 9
*/