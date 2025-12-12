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
            printf("%c is a consonant", a);
          }
        }
      }
    }
  }
  return 0;
}
//OUTPUT:
/*
Enter a alphabet: U
U is a vowel
*/