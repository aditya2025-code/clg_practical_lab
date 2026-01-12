// 74. Write a C program using a function isPrime(n) to check prime and print result.
#include <stdio.h>
void isprime(int x)
{
  int i, count = 0;
  for (i = 1; i <= x; i++)
  {
    if (x % i == 0)
      count++;
  }
  (count == 2) ? printf("%d is Prime Number", x) : printf("%d is not Prime Number", x);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  isprime(n);
  return 0;
}
// OUTPUT:
/*
Enter a number: 7
7 is Prime Number
*/