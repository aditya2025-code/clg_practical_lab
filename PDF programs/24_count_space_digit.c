/*
24.	Count spaces and digits in a string
Write a C program that reads a line of text and uses a loop to count spaces, digits, and other characters.
*/
#include <stdio.h>
int main()
{
  int i, count_s = 0, count_d = 0, count_c = 0;
  char a[51];
  printf("Enter a text(max 50 words):");
  fgets(a, 50, stdin);
  for (i = 0; a[i] != '\0'; i++)
  {
    if (a[i] == 32)
      count_s++;
    else if (a[i] >= '0' && a[i] <= '9')
      count_d++;
    else if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
      continue;
    else if (a[i] == 10)
      continue;
    else
      count_c++;
  }
  printf("Space = %d", count_s);
  printf("\nDigit = %d", count_d);
  printf("\nOther character/symbols = %d", count_c);
  return 0;
}
// OUTPUT:
/*
Enter a text(max 50 words):i'm a good boy.my age is 20
Space = 6
Digit = 2
Other character/symbols = 2
*/