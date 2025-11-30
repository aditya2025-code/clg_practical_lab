// PATTERN :
/*
1
23
456
78910
*/
#include <stdio.h>
int main()
{
  int i, j, r, num = 1;
  printf("Enter the no. of Rows: ");
  scanf("%d", &r);
  for (i = 1; i <= r; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", num);
      num++;
    }
    printf("\n");
  }
  return 0;
}