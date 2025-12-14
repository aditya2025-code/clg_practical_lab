/*
33.	Pattern 3: Floyd’s triangle (1, 2, 3, …)
For input n, print Floyd’s triangle using nested loops:
1
2 3
4 5 6
… Up to N terms
*/
#include <stdio.h>

int main()
{
  int i, j, k = 1, n;
  printf("Enter the rows: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", k);
      k++;
    }
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*
Enter the rows: 4
1
2 3
4 5 6
7 8 9 10
*/