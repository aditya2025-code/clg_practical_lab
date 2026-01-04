/*
26.	Maximum element in an array (loop)
Write a C program to read n integers into an array and find the maximum value using a loop.
*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], max;
  printf("Enter %d number: ",n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  max = a[0];
  for (int i = 1; i < n; i++)
  {
    if (max < a[i])
      max = a[i];
  }
  printf("MAXIMUM ELEMENT= %d", max);
  return 0;
}
// OUTPUT:
/*
Enter array size: 5
Enter 5 number: 111 222 333 444 555
MAXIMUM ELEMENT= 555
*/