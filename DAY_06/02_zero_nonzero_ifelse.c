// Write a program in c to check number is zero or non-zero using if-else:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  if (a == 0)
  {
    printf("%d is Zero", a);
  }
  else
  {
    printf("%d is non-Zero", a);
  }
}