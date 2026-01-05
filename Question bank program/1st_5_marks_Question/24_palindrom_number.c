// Q24. Write a C program to check whether a number is Palindrome.
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
    printf("%d is Palindrome Number", copy);
  else
    printf("%d is not Palindrome Number", copy);
}
// OUTPUT:
/*
Enter the number: 12321
12321 is Palindrome Number
*/