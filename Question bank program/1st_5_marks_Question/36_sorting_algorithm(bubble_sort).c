// Q36. Write a C program to implement any one sorting algorithm (Bubble/Selection/Insertion) for an integer array.

#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], swap;
  printf("Enter %d number: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Ascending order = ");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      if (a[j] > a[i + 1])
      {
        swap = a[j];
        a[j] = a[i + 1];
        a[i + 1] = swap;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}
// OUTPUT:
/*
Enter array size: 6
Enter 6 number: 5 6 7 0 2 9
Ascending order = 0 2 5 6 7 9
*/