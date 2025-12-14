/*
30.	Bubble sort using nested loops
Write a C program to sort an array of integers using the bubble sort algorithm (nested loops).
*/
#include <stdio.h>

int main()
{
  int a[5], swap;
  printf("Enter 5 number: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);
  printf("Ascending order = ");

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      if (a[j] > a[i + 1])
      {
        swap = a[j];
        a[j] = a[i + 1];
        a[i + 1] = swap;
      }
    }
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}
// OUTPUT:
/*
Enter 5 number: 5 6 7 2 9
Ascending order = 2 5 6 7 9
*/