/*
26.	Maximum element in an array (loop)
Write a C program to read n integers into an array and find the maximum value using a loop.
*/
#include <stdio.h>
int main()
{
  int a[5], max;
  printf("Enter 5 number: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  max = a[0];
  for (int i = 1; i < 5; i++)
  {
    if (max < a[i])
      max = a[i];
  }
  printf("MAXIMUM ELEMENT= %d", max);
  return 0;
}
// OUTPUT:
/*
Enter 5 number: 111 222 333 444 555
MAXIMUM ELEMENT= 555
*/