// Q37. Write a C program for matrix addition of two matrices.

#include <stdio.h>

int main()
{
  int row, col;
  printf("Enter the row and column size: ");
  scanf("%d %d", &row, &col);
  int i, j, a[row][col], b[row][col], c[row][col];
  printf("Enter The 1st matrix:\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter The 2nd matrix:\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  printf("The two matrix are:\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("\t%d", b[i][j]);
    }
    printf("\n");
  }
  printf("\nThe sum of two matrix :\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
      printf("\t%d", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
// OUTPUT :
/*
Enter the row and column size: 3 3
Enter The 1st matrix:
1 2 2
1 2 2
1 2 2
Enter The 2nd matrix:
2 1 1
2 1 1
2 1 1
The two matrix are:
        1       2       2
        1       2       2
        1       2       2

        2       1       1
        2       1       1
        2       1       1

The sum of two matrix :
        3       3       3
        3       3       3
        3       3       3
*/