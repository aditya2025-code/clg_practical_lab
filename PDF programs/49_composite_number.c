/*
49.	Check if a number is composite
Write a C program using loops to check if a given number is composite (non-prime and > 1) and print its smallest factor (other than 1).
*/
#include <stdio.h>

int main()
{
  int i, n, compo = 0;
  printf("Enter the Number: ");
  scanf("%d", &n);
  if (n <= 1)
  {
    printf("%d is Not Composite", n);
    return 0;
  }
  else
  {
    for (i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
      {
        compo = i;
        break;
      }
    }
  }
  if (compo != 0)
    printf("%d is Composite\nSmallest Factor = %d", n, compo);
  else
    printf("%d is Not Composite", n);
  return 0;
}

//OUTPUT:
/*
Enter the Number: 57
57 is Composite
Smallest Factor = 3
*/
