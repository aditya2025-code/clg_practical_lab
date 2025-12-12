// Write a program in c to check year is leap year or not using nested if-else type 1:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a year : ");
  scanf("%d", &a);
  if (a % 4 == 0)
  {
    if (a % 100 == 0)
    {
      if (a % 400 == 0)
      {
        printf("%d is a leap year", a);
      }
      else
      {
        printf("%d is not a leap year", a);
      }
    }
    else
    {
      printf("%d year is a leap year", a);
    }
  }
  else
  {
    printf("%d is not a leap year", a);
  }
}
//OUTPUT:
/*
Enter a year : 2025
2025 is not a leap year
*/