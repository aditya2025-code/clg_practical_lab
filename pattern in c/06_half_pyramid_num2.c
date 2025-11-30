// PATTERN :
/*
1
12
123
1234
12345
123456
1234567
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
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}