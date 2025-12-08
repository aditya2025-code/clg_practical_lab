// WRITE A PROGRAM TO PRINT SUM OF INDIVIDAUL ROW AND COLUMN IN A MATRIX:

#include <stdio.h>

int main()
{
  int i, j, sumofRow, sumofcol, a[3][3];
  printf("Enter a 3X3 matrix :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nThe matrix :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < 3; i++)
  {
    sumofRow = sumofcol = 0;
    for (j = 0; j < 3; j++)
    {
      sumofRow = sumofRow + a[i][j];
      sumofcol = sumofcol + a[j][i];
    }
    printf("Sum of Row = %d , Sum of column = %d\n", sumofRow, sumofcol);
  }
  return 0;
}
// OUTPUT:
/*
Enter a 3X3 matrix :
1 1 1
2 2 2
1 3 2

The matrix :
1       1       1
2       2       2
1       3       2
Sum of Row = 3 , Sum of column = 4
Sum of Row = 6 , Sum of column = 6
Sum of Row = 6 , Sum of column = 5
*/