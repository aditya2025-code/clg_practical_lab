#include <stdio.h>

int main()
{
  int not_prime = 0, i = 2, n;
  scanf("%d", &n);
  if (n == 0 || n == 1)
  {
    not_prime = 1;
  }
  else
    while (i < n)
    {
      if (n % i == 0 && n != 2)
        not_prime = 1;
      break;
      i++;
    }
  if (not_prime)
  {
    printf("%d is not Prime Number ", n);
  }
  else
    printf("%d is Prime Number", n);
  return 0;
}