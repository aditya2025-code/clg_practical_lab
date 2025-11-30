// PATTERN :
/*
7777777
666666
55555
4444
333
22
1
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
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}