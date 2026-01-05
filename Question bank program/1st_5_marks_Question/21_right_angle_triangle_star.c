// Q21. Write a C program to display a right-angled triangle pattern of * of height N.
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter the rows: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
      printf("* ");
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*

Enter the rows: 5
*
* *
* * *
* * * *
* * * * *


*/