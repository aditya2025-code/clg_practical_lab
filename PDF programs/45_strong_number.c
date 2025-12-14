/*
45.	Check if a number is strong number
A strong number is one whose sum of factorial of digits equals the number (e.g., 145 = 1! + 4! + 5!). Write a C program using loops to check this.
*/
#include <stdio.h>

int main()
{
  int n, n1, a, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  n1 = n;
  while (n != 0)
  {
    a = (n % 10);
    int facto = 1;
    for (int i = 1; i <= a; i++)
    {
      facto *= i;
    }
    sum += facto;
    n /= 10;
  }
  (sum == n1) ? printf("%d is Strong Number", n1) : printf("%d is not Strong Number", n1);
  return 0;
}
// OUTPUT:
/*
Enter the number: 145
145 is Strong Number
*/