// OUTPUT:
/*
Enter the no. of Rows: 9
        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654321
*/

#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter the no. of Rows: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = i; j <= n - 1; j++)
      printf(" ");
    for (j = 1; j <= i; j++)
      printf("%d", j);
    for (j = i - 1; j >= 1; j--)
      printf("%d", j);
    printf("\n");
  }
  return 0;
}