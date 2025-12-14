/*
25.	Sum of elements in an array using loop
Write a C program to input n elements in an array and find their sum using a loop.
*/
#include <stdio.h>

int main()
{
  int a[7], sum = 0;
  printf("Enter 7 numbers: ");
  for (int i = 0; i < 7; i++)
  {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  printf("SUM = %d", sum);
  return 0;
}
// OUTPUT:
/*
Enter 7 numbers: 2 2 2 2 2 2 2
SUM = 14
*/