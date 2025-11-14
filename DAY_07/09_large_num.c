// Write a program in c to check large number among 3 number using switch statement:

#include <stdio.h>

int main()
{
  int a, b, c, r;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b && a > c)
    r = 1;
  else if (b > a && b > c)
    r = 2;
  else
    r = 3;

  switch (r)
  {
  case 1:
    printf("Largest number is %d", a);
    break;

  case 2:
    printf("Largest number is %d", b);
    break;

  case 3:
    printf("Largest number is %d", c);
    break;
  }

  return 0;
}
