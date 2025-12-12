// Write a program in c to check large number among 3 number using nested if-else :
#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("%d is the Large Number", a);
    }
    else
    {
      printf("%d is the Large Number", c);
    }
  }
  else
  {
    if (b > c)
    {
      printf("%d is the Large Number", b);
    }
    else
    {
      printf("%d is the Large Number", c);
    }
  }
  return 0;
}
//OUTPUT:
/*
Enter three number : 9 99 91
99 is the Large Number
*/