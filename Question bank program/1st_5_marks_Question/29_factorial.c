// Q29. Write a C program to compute factorial using iteration.

#include <stdio.h>
void main()
{
  int i, n, facto = 1;
  printf("Enter the number: ");
  scanf("%d", &n);
  if (n == 0)
    printf("%d! = %d", n, facto);
  else if (n < 0)
    printf("%d! = Not possible", n);
  else
  {
    for (i = n; i >= 1; i--)
    {
      facto *= i;
    }
    printf("%d! = %d", n, facto);
  }
}
// OUTPUT1:
/*
Enter the number: 0
0! = 1
*/
// OUTPUT2:
/*
Enter the number: -5
-5! = Not possible
*/
// OUTPUT2:
/*
Enter the number: 5
5! = 120
*/