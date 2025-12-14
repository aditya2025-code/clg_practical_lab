/*
44.	Print digits of a number in words
Using loops and switch-case, write a C program that prints each digit of a number in words (e.g., 120 → ONE TWO ZERO).
*/
#include <stdio.h>

int main()
{
  int a[30], n, i = 0, rem;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    a[i] = (n % 10);
    i++;
    n /= 10;
  }

  for (i = i - 1; i >= 0; i--)
  {
    switch (a[i])
    {
    case 0:
      printf("ZERO ");
      break;
    case 1:
      printf("ONE ");
      break;
    case 2:
      printf("TWO ");
      break;
    case 3:
      printf("THREE ");
      break;
    case 4:
      printf("FOUR ");
      break;
    case 5:
      printf("FIVE ");
      break;
    case 6:
      printf("SIX ");
      break;
    case 7:
      printf("SEVEN ");
      break;
    case 8:
      printf("EIGHT ");
      break;
    case 9:
      printf("NINE ");
      break;
    }
  }
  return 0;
}
// OUTPUT1:
/*
Enter a number: 1234567890
ONE TWO THREE FOUR FIVE SIX SEVEN EIGHT NINE ZERO
*/
// OUTPUT2:
/*
Enter a number: 200600
TWO ZERO ZERO SIX ZERO ZERO
*/