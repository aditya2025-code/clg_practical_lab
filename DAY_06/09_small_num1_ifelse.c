// Write a program in c to check small number among 3 number using nested if-else:
#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a, &b, &c);
  if (a < b)
  {
    if (a < c)
    {
      printf("%d is the smallest Number", a);
    }
    else
    {
      printf("%d is the smallest Number", c);
    }
  }
  else
  {
    if (b < c)
    {
      printf("%d is the smallest Number", b);
    }
    else
    {
      printf("%d is the smallest Number", c);
    }
    return 0;
  }