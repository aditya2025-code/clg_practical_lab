/*
29.	Reverse an array using loop
Write a C program that reads an array of n integers and prints the array elements in reverse order using a loop.
*/
#include <stdio.h>

int main()
{
  int a[5];
  printf("Enter 5 number: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);
  printf("Reverse =");
  for (int i = 4; i >= 0; i--)
    printf(" %d", a[i]);
  return 0;
}
// OUTPUT:
/*
Enter 5 number: 1 2 3 4 5
Reverse = 5 4 3 2 1
*/