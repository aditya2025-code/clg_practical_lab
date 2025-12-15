/*
55.	Write a C program to print the following diamond pattern of stars for a given odd number n (height):
     *
    * *
   * * *
    * *
     *
*/
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter number of Row: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = i; j < n - i; j++)
      printf(" ");

    for (j = 1; j <= i; j++)
      printf("* ");

    printf("\n");
  }
  for (i = n - 1; i >= i; i--)
  {
    for (j = i; j < n - 1; j++)
      printf(" ");

    for (j = 1; j <= i; j++)
      printf("* ");

    printf("\n");
  }

  return 0;
}
// OUTPUT:
/*
Enter number of Row: 5
      *
     * *
    * * *
   * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
*/