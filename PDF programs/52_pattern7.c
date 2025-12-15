/*
52.	Write a C program to print the following pattern of repeated row numbers for a given n:
	1
	2 2
	3 3 3
	4 4 4 4
	------- n terms

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
      printf("%d ",i);
    printf("\n");
  }
  return 0;
}
// OUTPUT:
/*

Enter the rows: 5
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5


*/