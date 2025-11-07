// Write a program in c to check alphabet is vowel or consonant using nested if-else:

#include <stdio.h>

int main()
{
  char a;
  printf("Enter a alphabet: ");
  scanf("%c", &a);
  if (a == 'a' || a == 'A')
  {
    printf("%c is a vowel", a);
  }
  else
  {
    if (a == 'e' || a == 'E')
    {
      printf("%c is a vowel", a);
    }
    else
    {
      if (a == 'i' || a == 'I')
      {
        printf("%c is a vowel", a);
      }
      else
      {
        if (a == 'o' || a == 'O')
        {
          printf("%c is a vowel", a);
        }
        else
        {
          if (a == 'u' || a == 'U')
          {
            printf("%c is a vowel", a);
          }
          else
          {
            printf("%c is a cosonant", a);
          }
        }
      }
    }
  }
  return 0;
}