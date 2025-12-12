/*
9.	Palindrome number check
Using a loop, write a C program to check whether a given integer is a palindrome or not.
*/
#include <stdio.h>
void main()
{
  int n, copy, rem, store = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  copy = n;
  while (n != 0)
  {
    rem = n % 10;
    store = store * 10 + rem;
    n /= 10;
  }
  if (copy == store)
    printf("%d is Palindrome Number", store);
  else
    printf("%d is not Palindrome Number", store);
}
// OUTPUT:
/*
Enter the number: 12321
12321 is Palindrome Number
*/