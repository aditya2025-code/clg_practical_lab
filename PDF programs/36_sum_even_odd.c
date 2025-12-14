/*
36.	Sum of even and odd elements separately
Write a C program to read n integers and use a loop to compute the sum of even elements and the sum of odd elements separately
*/
#include <stdio.h>

int main()
{
  int a[10], sum_eve = 0, sum_odd = 0;
  printf("Enter 10 number: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] % 2 == 0)
      sum_eve += a[i];
    else
      sum_odd += a[i];
  }
  printf("Sum of Even number = %d", sum_eve);
  printf("\nSum of Odd number = %d", sum_odd);
  return 0;
}
// OUTPUT:
/*
Enter 10 number: 1 2 3 4 5 6 7 8 9 10
Sum of Even number = 30
Sum of Odd number = 25
*/