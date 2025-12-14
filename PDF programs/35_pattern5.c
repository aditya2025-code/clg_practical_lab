/*
35.	Pattern 5: Pyramid of stars
For input n, print a pyramid (center-aligned) using nested loops, e.g., for n=3:
   *
  * *
 * * *
* * * *
*/
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter the rows: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (n - i); j++)
      printf(" ");
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