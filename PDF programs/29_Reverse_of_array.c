/*
29.	Reverse an array using loop
Write a C program that reads an array of n integers and prints the array elements in reverse order using a loop.
*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d number: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Reverse =");
  for (int i = n - 1; i >= 0; i--)
    printf(" %d", a[i]);
  return 0;
}
// OUTPUT:
/*
Enter array size: 5
Enter 5 number: 1 2 3 4 5
Reverse = 5 4 3 2 1
*/