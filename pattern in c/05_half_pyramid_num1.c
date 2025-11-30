// PATTERN :
/*

1
22
333
4444
55555
666666
7777777

*/
#include <stdio.h>
int main()
{
  int i, j, r;
  printf("Enter the rows you want: ");
  scanf("%d", &r);
  for (i = 1; i <= r; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}