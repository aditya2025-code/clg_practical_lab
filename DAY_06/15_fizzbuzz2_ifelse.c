// Write a program to calculate Fizz, FizzBuzz, or Buzz using nested if-else type 2:

#include <stdio.h>
void main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if ((a % 5 == 0) && (a % 3 == 0))
  {
    printf("%d is fizzbuzz", a);
  }
  else
  {
    if (a % 5 == 0)
    {
      printf("%d is buzz", a);
    }
    else
    {
      if (a % 3 == 0)
      {
        printf("%d is Fizz", a);
      }
      else
      {
        printf("%d is not Fizz,Buzz or FizzBuzz", a);
      }
    }
  }
}
//OUTPUT:
/*
Enter a number: 25
25 is buzz
*/