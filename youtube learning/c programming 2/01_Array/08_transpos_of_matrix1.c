//WRITE A PROGRAM TO TRANSPOS A MATRIX:
#include <stdio.h>

int main()
{
  int i, j, a[2][3];
  printf("Enter the 2X3 matrix:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nThe matrix is\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
  printf("The transpos of this matrix is\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("\t%d", a[j][i]);
    }
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*
Enter the 2X3 matrix:
2 3 6
4 6 12

The matrix is
        2       3       6
        4       6       12
The transpos of this matrix is
        2       4
        3       6
        6       12
*/