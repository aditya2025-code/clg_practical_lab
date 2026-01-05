// Q27. Write a C program to print prime factors of a given number.
#include <stdio.h>

int main()
{
  int n, divisor = 2;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("Prime Factor of %d is", n);
  while (n != 1)
  {
    if (n % divisor == 0)
    {
      printf(" %d", divisor);
      n /= divisor;
    }
    else
    {
      divisor++;
    }
  }
  return 0;
}
// OUTPUT:
/*
Enter the number: 60
Prime Factor of 60 is 2 2 3 5
*/