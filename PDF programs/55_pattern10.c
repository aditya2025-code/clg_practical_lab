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
  int n, r, c;
  printf("Enter the Rows: ");
  scanf("%d", &n);
  for (r = 1; r <= n; r++)
  {
    for (c = 1; c <= n - r; c++)
      printf(" ");
    for (c = 1; c <= r; c++)
      printf("* ");
    printf("\n");
  }
  for (r = n - 1; r >= 1; r--)
  {
    for (c = 1; c <= n - r; c++)
      printf(" ");
    for (c = 1; c <= r; c++)
      printf("* ");
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*
Enter the Rows: 5
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