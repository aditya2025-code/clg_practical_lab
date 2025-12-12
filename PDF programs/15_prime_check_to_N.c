/*
15.	Print all primes in a range
Write a C program that uses loops to print all prime numbers between 1 and n.
*/
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter the Range: ");
  scanf("%d", &n);
  printf("Prime number from 1 to %d =", n);
  for (i = 1; i <= n; i++)
  {
    int count = 0;
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
Enter the Range: 105
Prime number from 1 to 105 = 2; 3; 5; 7; 11; 13; 17; 19; 23; 29; 31; 37; 41; 43; 47; 53; 59; 61; 67; 71; 73; 79; 83; 89; 97; 101; 103;
*/