// 59. Write a C program to reverse an array in-place.
#include <stdio.h>

int main()
{
  int n, n1;
  printf("Enter array size: ");
  scanf("%d", &n);
  n1 = n - 1;
  int a[n], swap;
  printf("Enter %d number: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n1; i++, n1--)
  {
    swap = a[i];
    a[i] = a[n1];
    a[n1] = swap;
  }
  printf("Reverse =");
  for (int i = 0; i < n; i++)
    printf(" %d", a[i]);
  return 0;
}
// OUTPUT:
/*
Enter array size: 7
Enter 7 number: 77 66 55 44 33 22 11
Reverse = 11 22 33 44 55 66 77
*/