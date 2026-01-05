// Q40. Write a C program using string functions to count vowels, consonants, digits, spaces in a line of text.
#include <stdio.h>
int main()
{
  int i, count1 = 0, count2 = 0, count_s = 0, count_d = 0, count_c = 0;
  char a[51];
  printf("Enter a text(max 50 words):");
  fgets(a, 50, stdin);
  for (i = 0; a[i] != '\0'; i++)
  {
    if (a[i] == 32)
    {
      count_s++;
      continue;
    }
    else if (a[i] >= '0' && a[i] <= '9')
    {
      count_d++;
      continue;
    }
    else if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
    {
      switch (a[i])
      {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        count1++;
        break;
      default:
        count2++;
        continue;
      }
    }
    else if (a[i] == 10)
      continue;
    else
    {
      count_c++;
      continue;
    }
  }
  printf("Space = %d", count_s);
  printf("\nDigit = %d", count_d);
  printf("\nOther character/symbols = %d", count_c);
  printf("\nTotal vowels are %d", count1);
  printf("\nTotal consonant are %d", count2);
  return 0;
}
// OUTPUT:
/*
Enter a text(max 50 words):Adity@ is a 100% bad boy.You should know this.
Space = 8
Digit = 3
Other character/symbols = 4
Total vowels are 12
Total consonant are 19
*/