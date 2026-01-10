// 73. Write a program using pointer to pointer to update a variable value and print before/after values.
#include <stdio.h>

int main()
{
  int a;
  printf("Enter a value: ");
  scanf("%d", &a);
  printf("The Value = %d", a);
  int *ptr1 = &a;
  int **ptr2 = &ptr1;
  printf("\nUpdate the Previous value: ");
  scanf("%d", &(**ptr2));
  printf("Current Value = %d", a);
  return 0;
}
// OUTPUT:
/*
Enter a value: 10
The Value = 10
Update the Previous value: 20
Current Value = 20
*/