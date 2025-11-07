// Write a program in c to check small number among 3 number using if-else ladder:
#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a, &b, &c);
  if (a < b && a < c)
  {
    printf("%d is the small number", a);
  }
  else if (b < a && b < c)
  {
    printf("%d is the small number", b);
  }
  else
  {
    printf("%d is the small number", c);
  }
  return 0;
}