/*
31.	Pattern 1: Right-angled triangle of stars
For input n, print the following pattern using nested loops:
*
* *
* * *
… (n rows)
*/
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