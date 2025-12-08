//WRITE A PROGRAM TO TRANSPOS A MATRIX INTO B MATRIX:
#include <stdio.h>

int main()
{
  int i, j, a[3][3], b[3][3];
  printf("\nEnter 3X3 matrix:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nThe matrix of a :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
  printf("The a matrix transpos into b :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      b[i][j] = a[j][i];
      printf("\t%d", b[i][j]);
    }
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*
Enter 3X3 matrix:
9 8 7
6 5 4
3 2 1

The matrix of a :
        9       8       7
        6       5       4
        3       2       1
The a matrix transpos into b :
        9       6       3
        8       5       2
        7       4       1
*/