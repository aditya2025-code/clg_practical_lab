// PATTERN :
/*
1111111
222222
33333
4444
555
66
7
*/
#include <stdio.h>
int main()
{
  int i, j, k, c;
  printf("Enter the column you want: ");
  scanf("%d", &c);
  for (i = c, k = 1; i > 0; i--, k++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", k);
    }
    printf("\n");
  }
  return 0;
}