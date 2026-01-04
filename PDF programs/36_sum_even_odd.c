/*
36.	Sum of even and odd elements separately
Write a C program to read n integers and use a loop to compute the sum of even elements and the sum of odd elements separately
*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], sum_eve = 0, sum_odd = 0;
  printf("Enter %d number: ",n);
  for (int i = 0; i < n; i++)
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
Enter array size: 10 
Enter 10 number: 1 2 3 4 5 6 7 8 9 10
Sum of Even number = 30
Sum of Odd number = 25
*/