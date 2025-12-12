/*
14.	Prime number check
Write a C program to check whether a given number is prime or not using a loop.
*/
#include <stdio.h>

int main()
{
  int i, n, count = 0;
  printf("Enter the Number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
      count++;
  }
  if (count == 2)
    printf("%d is Prime", n);
  else
    printf("%d is Not Prime", n);
  return 0;
}
// OUTPUT:
/*
Enter the Number: 47
47 is Prime
*/