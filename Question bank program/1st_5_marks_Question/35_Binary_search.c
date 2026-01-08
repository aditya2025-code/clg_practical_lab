// Q35. Write a C program to perform binary search on a sorted array.

#include <stdio.h>
int main()
{
  int n;
  printf("Enter Array size: ");
  scanf("%d", &n);
  if (n > 0)
  {
    int a[n], low = 0, high = n - 1, mid, key;
    printf("Enter Array element in Ascending order: ");
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    printf("Enter the key element: ");
    scanf("%d", &key);
    while (low <= high)
    {
      mid = (high + low) / 2;
      if (a[mid] == key)
      {
        printf("%d is found at index %d", key, mid);
        return 0;
      }
      else if (a[mid] < key)
        low = mid + 1;
      else
        high = mid - 1;
    }
    printf("%d is not Found", key);
  }
  else
    printf("Array size should be Positive");
  return 0;
}
// OUTPUT:
/*
Enter Array size: 7
Enter Array element in Ascending order: 11 55 68 95 105 111 199
Enter the key element: 199
199 is found at index 6
*/