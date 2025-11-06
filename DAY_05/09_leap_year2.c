//write a program in c to check year is leap year or not using nested tarnary oparator:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a year : ");
  scanf("%d", &a);
  (a % 400 == 0) ? printf("%d is Leap Year", a) : (a % 4 == 0) ? (a % 100 != 0) ? printf("%d is Leap Year", a) : printf("%d is not Leap Year", a): printf("%d is not Leap Year", a);
}