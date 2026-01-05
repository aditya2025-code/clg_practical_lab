// Q20. Write a C program to generate AP and GP for N terms given first term and difference/ratio
#include <stdio.h>

int main()
{
  int n, n1, m, diff, ratio, sum = 0, multi = 1;
  printf("Enter the starting and N'th term: ");
  scanf("%d %d", &n, &m);
  n1 = n;
  printf("Enter the Difference and the Ratio: ");
  scanf("%d %d", &diff, &ratio);
  printf("AP = %d ", n);
  while (n <= m)
  {
    sum = n + diff;
    if (sum > m)
      break;
    printf("%d ", sum);
    n = sum;
  }
  printf("\nGP = %d ", n1);
  while (n1 <= m)
  {
    multi = n1 * ratio;
    if (multi > m)
      break;
    printf("%d ", multi);
    n1 = multi;
  }
  return 0;
}
// OUTPUT:
/*
Enter the starting and N'th term: 3 35
Enter the Difference and the Ratio: 2 3
AP = 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35
GP = 3 9 27
*/