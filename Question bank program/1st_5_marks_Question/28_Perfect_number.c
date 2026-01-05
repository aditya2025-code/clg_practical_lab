// Q28. Write a C program to check whether a number is Perfect number.
#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
      sum += i;
  }
  (sum == n) ? printf("%d IS PERFECT NUMBER",n) : printf("%d IS NOT PERFECT NUMBER",n);
  return 0;
}
// OUTPUT:
/*
Enter a number: 28
28 IS PERFECT NUMBER
*/