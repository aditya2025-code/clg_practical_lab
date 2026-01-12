// 78. Write a function to return maximum and minimum of an array (use parameters + return strategy of your choice).
#include <stdio.h>

int maxminArray(int *arr, int n, int *max, int *min)
{
  *max = *arr, *min = *arr;
  for (int i = 0; i < n; i++)
  {
    if (*max < *(arr + i))
      *max = *(arr + i);
    if (*min > *(arr + i))
      *min = *(arr + i);
  }
  return 0;
}
int main()
{
  int n, maximum, minimum;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter Array element: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  maxminArray(a, n, &maximum, &minimum);
  printf("Maximum element = %d\nMinimum element = %d", maximum, minimum);
}
// OUTPUT:
/*
Enter the size of Array: 7
Enter Array element: 7 6 5 4 3 2 0
Maximum element = 7
Minimum element = 0
*/