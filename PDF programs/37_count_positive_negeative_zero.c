/*
37.	Count positive, negative, zero numbers
Read n integers and use a loop to count how many are positive, negative, and zero.
*/
#include <stdio.h>

int main()
{
  int a[10], count_pos = 0, count_neg = 0, count_zero = 0;
  printf("Enter 10 number: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] > 0)
      count_pos++;
    else if (a[i] < 0)
      count_neg++;
    else
      count_zero++;
  }
  printf("POSITIVE = %d\nNEGATIVE = %d\nZERO = %d", count_pos, count_neg, count_zero);
  return 0;
}
// OUTPUT:
/*
Enter 10 number: 2 -8 0 9 -4 7 0 -5 55 -7
POSITIVE = 4
NEGATIVE = 4
ZERO = 2
*/