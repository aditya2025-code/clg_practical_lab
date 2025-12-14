/*
48.	Print all factors of a number
Write a C program using a loop to print all the factors of a given number.
*/
#include <stdio.h>

int main()
{
  int a[30], n, j = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      a[j] = i;
      j++;
    }
  }
  printf("Factor = ");
  for (int i = 0; i < j; i++)
    printf("%d ", a[i]);
  return 0;
}
// OUTPUT:
/*
Enter the number: 18
Factor = 1 2 3 6 9
*/