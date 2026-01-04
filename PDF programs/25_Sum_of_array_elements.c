/*
25.	Sum of elements in an array using loop
Write a C program to input n elements in an array and find their sum using a loop.
*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], sum = 0;
  printf("Enter %d numbers: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  printf("SUM = %d", sum);
  return 0;
}
// OUTPUT:
/*
Enter array size: 7
Enter 7 numbers: 2 2 2 2 2 2 2
SUM = 14
*/