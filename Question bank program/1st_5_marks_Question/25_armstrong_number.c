// Q25. Write a C program to check whether a number is Armstrong (for 3-digit numbers).
#include <stdio.h>
#include <math.h>
int main()
{
  int n, copy, rem, sum = 0;
  printf("Enter three Digit number: ");
  scanf("%d", &n);
  copy = n;
  while (n != 0)
  {
    rem = n % 10;
    sum += pow(rem, 3);
    n /= 10;
  }
  if (copy == sum)
    printf("%d is Armstrong Number", sum);
  else
    printf("%d is not Armstrong Number", copy);
  return 0;
}
// OUTPUT:
/*
Enter three Digit number: 153
153 is Armstrong Number
*/