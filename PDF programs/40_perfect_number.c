/*
40.	Check if a number is perfect
A number is perfect if the sum of its proper divisors equals the number (e.g., 6 = 1+2+3). Write a C program using a loop to check if a number is perfect.
*/
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
  (sum == n) ? printf("PERFECT NUMBER") : printf("NOT PERFECT NUMBER");
  return 0;
}
// OUTPUT:
/*
Enter a number: 28
PERFECT NUMBER
*/