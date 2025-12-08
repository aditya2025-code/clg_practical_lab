#include <stdio.h>
int main()
{
  int a[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the value of index %d = ", i);
    scanf("%d", &a[i]);
  }
  for (int j = 0; j < 5; j++)
  {
    printf("\nThe value of %d index is %d", j, a[j]);
  }
  printf("\n");
  for (int k = 4; k >= 0;k--)
  {
    printf("\nThe reverse value of %d index is %d",k,a[k]);
  }
  return 0;
}

//OUTPUT:
/*
Enter the value of index 0 = 5452
Enter the value of index 1 = 241
Enter the value of index 2 = 545
Enter the value of index 3 = 7485
Enter the value of index 4 = 310

The value of 0 index is 5452
The value of 1 index is 241
The value of 2 index is 545
The value of 3 index is 7485
The value of 4 index is 310

The reverse value of 4 index is 310
The reverse value of 3 index is 7485
The reverse value of 2 index is 545
The reverse value of 1 index is 241
The reverse value of 0 index is 5452
*/