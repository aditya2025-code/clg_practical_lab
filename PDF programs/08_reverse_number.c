/*
8.	Reverse a number
Write a C program to reverse a given integer (e.g., 1234 → 4321) using a loop.
*/
#include <stdio.h>
void main()
{
  int n, rem, store = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    rem = n % 10;
    store = store * 10 + rem;
    n /= 10;
  }
  printf("Reveres = %d", store);
}
// OUTPUT:
/*
Enter the number: 1234
Reveres = 4321
*/