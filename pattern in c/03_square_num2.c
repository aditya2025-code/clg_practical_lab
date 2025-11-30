// PATTERN :
/*

111111111
222222222
333333333
444444444 

*/
#include <stdio.h>
int main()
{
  int i, j, r, c;
  printf("Enter the Row and column : ");
  scanf("%d %d", &r, &c);
  for (i = 1; i <= r; i++)
  {
    for (j = 1; j <= c; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}