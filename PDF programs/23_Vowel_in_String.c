/*
23.	Count vowels in a string (using loop)
Write a C program to input a string and count the number of vowels using a loop (no string library iteration functions).
*/
#include <stdio.h>
int main()
{
  int i, count1 = 0, count2 = 0;
  char a[30];
  printf("Enter any Word: ");
  scanf("%s", a);
  for (i = 0; a[i] != '\0'; i++)
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
      break;
    }
  }
  printf("Total vowels are %d\n", count1);
  printf("Total consonant are %d", count2);
  return 0;
}
// OUTPUT:
/*
Total vowels are 4
Total consonant are 5
*/