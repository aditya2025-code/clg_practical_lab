// PATTERN :
/*
1234567
123456
12345
1234
123
12
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
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}