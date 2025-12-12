// Write a program in c to check number is positive or negative or zero using ifelse ladder:
#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  if (a > 0)
  {
    printf("%d is positive number", a);
  }
  else if (a == 0)
  {
    printf("%d is Zero", a);
  }
  else
  {
    printf("%d is negative number", a);
  }
  return 0;
}
//OUTPUT:
/*
Enter a number : -7
-7 is negative number
*/