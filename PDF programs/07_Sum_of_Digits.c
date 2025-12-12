/*
7.	Sum of digits
Write a C program to find the sum of digits of a given number using a loop.
*/
#include <stdio.h>
void main()
{
  int n, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    sum += (n % 10);
    n /= 10;
  }
  printf("Sum of Digits = %d", sum);
}
// OUTPUT:
/*
Enter the number: 151
Sum of Digits = 7
*/