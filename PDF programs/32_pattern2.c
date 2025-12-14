/*32.	Pattern 2: Inverted right-angled triangle
For input n, print the pattern using nested loops:
* * * *
* * *
* *
*

*/
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter the rows: ");
  scanf("%d", &n);
  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
      printf("* ");
    printf("\n");
  }
  return 0;
}
//OUTPUT:
/*

Enter the rows: 5
* * * * * 
* * * * 
* * * 
* * 
* 


*/