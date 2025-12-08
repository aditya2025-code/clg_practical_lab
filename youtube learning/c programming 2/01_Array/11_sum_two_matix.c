// Write program in c to display sum of two matrix:
#include <stdio.h>

int main()
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
  printf("\nThe sum of two matrix :\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
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
Enter The 1st matrix:
1 1 1
2 2 2
Enter The 2nd matrix:
4 4 4
3 3 3
The two matrix are:
        1       1       1
        2       2       2

        4       4       4
        3       3       3

The sum of two matrix :
        5       5       5
        5       5       5
*/