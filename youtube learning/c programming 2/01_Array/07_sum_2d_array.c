//WRITE A PROGRAM TO DISPLAY SUM OF A MATRIX:
#include <stdio.h>

int main()
{
  int i, j, a[3][3], sum = 0;
  printf("Enter the 3X3 matrix:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nThe matrix is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", a[i][j]);
      sum = sum + a[i][j];
    }
    printf("\n");
  }
  printf("\nSum = %d", sum);
  return 0;
}
// OUTPUT:
/*
Enter the 3X3 matrix:
4 4 4
4 4 4
4 4 4

The matrix is :
        4       4       4
        4       4       4
        4       4       4

Sum = 36
*/