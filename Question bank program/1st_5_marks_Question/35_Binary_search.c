// Q35. Write a C program to perform binary search on a sorted array.

#include <stdio.h>
int main()
{
  int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int low = 0, high = 8 - 1, mid, key;
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
      low = mid - 1;
    else
      high = mid + 1;
  }
  printf("%d is not Found");
  return 0;
}