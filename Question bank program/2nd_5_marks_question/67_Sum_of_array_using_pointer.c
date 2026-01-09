// 67. Write a C program to find the sum of array elements using pointer arithmetic (no indexing a[i]).
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the array size: ");
  scanf("%d", &n);
  int a[n], sum = 0;
  printf("Enter the array element: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int *ptr = &a[0];
  for (int i = 0; i < n; i++)
    sum += *(ptr + 1);
  printf("Sum of array = %d", sum);
  return 0;
}
// OUTPUT:
/*
Enter the array size: 5
Enter the array element: 3 3 3 3 3
Sum of array = 15
*/