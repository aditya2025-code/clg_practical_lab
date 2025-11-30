// PATTERN :
/*

      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *

*/
#include <stdio.h>
int main()
{
  int i, j, k, r;
  printf("Enter the no. of Rows: ");
  scanf("%d", &r);
  for (i = 1; i <= r; i++)
  {
    for (j = 1; j <= (r - i); j++)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}