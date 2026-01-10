// 72. Write a function that returns the address of the maximum element in an array using pointers.
#include <stdio.h>
int findmax(int *);
int n;
int main()
{
  int max;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter array element: ");
  for (int i = 0; i <= n - 1; i++)
    scanf("%d", &a[i]);
  max = findmax(&a[0]);
  printf("Maximum element in the Array = %d", max);
  return 0;
}
int findmax(int *ptr)
{
  int max = *(ptr + 1);
  for (int i = 0; i < n; i++)
  {
    if (*(ptr + i) > max)
      max = *(ptr + i);
  }
  return max;
}
// OUTPUT:
/*
Enter array size: 5
Enter array element: 2 5 9 7 8
Maximum element in the Array = 9
*/