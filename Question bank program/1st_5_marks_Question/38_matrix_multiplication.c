// Q38. Write a C program for matrix multiplication (A×B), include dimension validation.

#include <stdio.h>
void main()
{
  int n;
  printf("Enter size of square (AXA)matrix: ");
  scanf("%d",&n);
  int i, j, a[n][n], b[n][n], c[n][n];
  printf("Enter The 1st matrix:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter The 2nd matrix:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  printf("The two matrix are:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("\t%d", b[i][j]);
    }
    printf("\n");
  }
  printf("\nThe Multiplication of two matrix :\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      int m = 0;
      for (int k = 0; k < n; k++)
      {
        m = m + (a[i][k] * b[k][j]);
      }
      c[i][j] = m;
      printf("\t%d", c[i][j]);
    }
    printf("\n");
  }
}
// OUTPUT:
/*
Enter The 1st matrix:
1 2 3
3 2 1
5 6 1
Enter The 2nd matrix:
1 1 1
2 2 2
3 3 3
The two matrix are:
        1       2       3
        3       2       1
        5       6       1

        1       1       1
        2       2       2
        3       3       3

The Multiplication of two matrix :
        14      14      14
        10      10      10
        20      20      20
*/