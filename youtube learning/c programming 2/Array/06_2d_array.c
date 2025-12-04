#include <stdio.h>

int main()
{
  int a[2][3];
  int b[2][3] = {0};
  int c[2][3] = {11, 1, 6, 5, 0, -66};
  int d[4][2] = {2, 4, 8, 16, 32, 64, 128, 256};
  printf("Enter the 2d Array element:\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nThe elements of a:\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("\nThe elements of b:\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }
  printf("\nThe elements of c:\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  printf("\nThe elements of d:\n");

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d\t", d[i][j]);
    }
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*
Enter the 2d Array element:
6 5 4
3 2 1

The elements of a:
6       5       4
3       2       1

The elements of b:
0       0       0
0       0       0

The elements of c:
11      1       6
5       0       -66

The elements of d:
2       4
8       16
32      64
128     256
*/