// PATTERN :
/*

*********
********
*******
******
*****
****
***
**
*

*/
#include <stdio.h>
int main()
{
  int i, j, c;
  printf("Enter the column you want: ");
  scanf("%d", &c);
  for (i = c; i > 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}