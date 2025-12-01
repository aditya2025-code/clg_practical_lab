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
  return 0;
}

//OUTPUT:
/*
Enter the value of index 0 = 5
Enter the value of index 1 = 8
Enter the value of index 2 = 7
Enter the value of index 3 = 63
Enter the value of index 4 = 4

The value of 0 index is 5
The value of 1 index is 8
The value of 2 index is 7
The value of 3 index is 63
The value of 4 index is 4
*/