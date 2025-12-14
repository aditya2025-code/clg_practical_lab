/*
28.	Frequency of a given element in an array
Write a C program to count how many times a particular element appears in an array using a loop.
*/
#include <stdio.h>

int main()
{
  int a[10], search, count = 0;
  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\nNow enter the searching element: ");
  scanf("%d", &search);
  for (int i = 0; i < 10; i++)
  {
    if (search == a[i])
      count++;
  }
  printf("\nFrequency = %d", count);
  return 0;
}
// OUTPUT:
/*
Enter 10 numbers:  1 2 3 4 5 5 6 5 7 5

Now enter the searching element: 5

Frequency = 4
*/