/*
51.	Write a C program to print the following right-angled triangle of numbers for a given n:
	1
	1 2
	1 2 3
	1 2 3 4
	------ n terms
*/
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("Enter the rows: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
      printf("%d ",j);
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*

Enter the rows: 5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/