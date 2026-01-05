// Q33. Write a recursive C program to compute factorial.
#include <stdio.h>

int facto(int a)
{
  if (a == 1)
    return a;
  return a * facto(a - 1);
}
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("Factorial of %d = %d", n, facto(n));
  return 0;
}
// OUTPUT:
/*
Enter the number: 5
Factorial of 5 = 120
*/