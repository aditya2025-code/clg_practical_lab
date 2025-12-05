// Write program in c to display subtraction of two matrix:
#include <stdio.h>
void main()
{
  int i, j, a[2][3], b[2][3], c[2][3];
  printf("Enter The 1st matrix:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter The 2nd matrix:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  printf("The two matrix are:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", b[i][j]);
    }
    printf("\n");
  }
  printf("\nThe subtraction of two matrix :\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
      printf("\t%d", c[i][j]);
    }
    printf("\n");
  }
}
// OUTPUT:
/*
Enter The 1st matrix:
5 6 7
10 12 14
Enter The 2nd matrix:
4 5 6
8 10 12
The two matrix are:
        5       6       7
        10      12      14

        4       5       6
        8       10      12

The subtraction of two matrix :
        1       1       1
        2       2       2
*/