// Write a program in c to check year is leap year or not using nested if-else:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a year : ");
  scanf("%d", &a);
  if (a % 400 == 0)
  {
    printf("%d year is a leap year", a);
  }
  else if (a % 4 == 0)
  {
    if (a % 100 != 0)
    {
      printf("%d year is a leap year", a);
    }
    else
    {
      printf("%d year is not a leap year", a);
    }
  }
  else
  {
    printf("%d year is not a leap year", a);
  }
}