// Q26. Write a C program to check whether a number is Prime and also print all primes up to N.
#include <stdio.h>

int main()
{
  int i, j, n, count = 0;
  printf("Enter the Number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
      count++;
  }
  (count == 2) ? printf("%d is Prime", n) : printf("%d is Not Prime", n);
  printf("\nPrime number from 1 to %d =", n);
  for (i = 1; i <= n; i++)
  {
    count = 0;
    for (j = 1; j <= i; j++)
    {
      if (i % j == 0)
        count++;
    }
    if (count == 2)
      printf(" %d;", i);
  }
  return 0;
}
// OUTPUT:
/*
Enter the Number: 89
89 is Prime
Prime number from 1 to 89 = 2; 3; 5; 7; 11; 13; 17; 19; 23; 29; 31; 37; 41; 43; 47; 53; 59; 61; 67; 71; 73; 79; 83; 89;
*/