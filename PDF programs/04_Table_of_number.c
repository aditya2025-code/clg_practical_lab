/*
4.	Table of a number
Write a C program to read an integer and print its multiplication table from 1 to 10 using a loop.
*/
#include <stdio.h>
void main()
{
  int i, n;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++)
  {
    printf("%d X %d = %d\n", n, i, n * i);
  }
}
// OUTPUT:
/*
Enter the number: 2
2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
2 X 4 = 8
2 X 5 = 10
2 X 6 = 12
2 X 7 = 14
2 X 8 = 16
2 X 9 = 18
2 X 10 = 20
*/