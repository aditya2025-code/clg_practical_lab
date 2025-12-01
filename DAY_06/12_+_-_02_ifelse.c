// Write a program in c to check number is positive or negative or zero using nested ifelse type 2:

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
  else
  {
    if (a == 0)
    {
      printf("%d is Zero", a);
    }
    else
    {
      printf("%d is negative number", a);
    }
  }
  return 0;
}
//OUTPUT:
/*
Enter a number : 0
0 is Zero
*/