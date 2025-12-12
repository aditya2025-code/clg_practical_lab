// Write a program in c to check year is leap year or not using switch statement:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a year : ");
  scanf("%d", &a);
  switch((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
  {
    case 1 :  printf("%d year is a leap year", a);
    break;
    case 0 :  printf("%d year is not a leap year", a);
    break;
  }
}

//OUTPUT:
/*
Enter a year : 2024
2024 year is a leap year
*/