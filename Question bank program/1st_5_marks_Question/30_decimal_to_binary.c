// Q30. Write a C program to convert a number from decimal to binary.
#include <stdio.h>

int main()
{
  int a[20], i = 0, n;
  printf("Enter a Decimal number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    a[i] = (n % 2);
    i++;
    n /= 2;
  }
  printf("Binary = ");
  for (i = i - 1; i >= 0; i--)
    printf("%d ", a[i]);
  return 0;
}
// OUTPUT1:
/*
Enter a Decimal number: 14
Binary = 1 1 1 0
*/
// OUTPUT2:
/*
Enter a Decimal number: 58
Binary = 1 1 1 0 1 0
*/