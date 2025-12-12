/*
10.	Armstrong number check (3-digit)
Write a C program using loops to check whether a 3-digit number is an Armstrong number (sum of cubes of digits equals the number).
*/
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