/*
5.	Reverse counting
Write a C program to print numbers from n down to 1 using a while loop.
*/
#include <stdio.h>
void main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  while (n >= 1)
  {
    printf("%d\n", n);
    n--;
  }
}
// OUTPUT:
/*
Enter the number: 5
5
4
3
2
1
*/