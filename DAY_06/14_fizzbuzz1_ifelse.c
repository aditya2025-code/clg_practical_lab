// Write a program to calculate Fizz, FizzBuzz, or Buzz using nested if-else type 1:

#include <stdio.h>
void main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if ((a % 5 == 0) || (a % 3 == 0))
  {
    if (a % 5 == 0)
    {
      if (a % 3 == 0)
      {
        printf("%d is Fizzbuzz", a);
      }
      else 
      {
        printf("%d is buzz", a);
      }
    }
    else
    {
      printf("%d is Fizz", a);
    }
  }
  else
  {
    printf("%d is not Fizz,Buzz or FizzBuzz", a);
  }
}
//OUTPUT:
/*
Enter a number: 30
30 is Fizzbuzz
*/