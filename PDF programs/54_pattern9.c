/*
54.	Write a C program to print the following inverted pyramid pattern of stars for a given n:
  * * * *
   * * *
    * *
     *
*/

#include <stdio.h>

int main()
{
  int i, j, n;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  for (i = n; i >= 1; i--)
  {
    for (j = 0; j < n - i; j++)
    {
      printf(" ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}
// OUTPUT:
/*
Enter number of rows: 6
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/