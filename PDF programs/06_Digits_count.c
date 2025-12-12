/*
6.	Digits count
Write a C program to count the number of digits in a given integer using a loop.
*/
#include <stdio.h>
void main()
{
  int n, rem, count = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    rem = n % 10;
    count++;
    n /= 10;
  }
  printf("Total Digits = %d", count);
}
// OUTPUT:
/*
Enter the number: 28356
Total Digits = 5
*/