//Write a program that reads a character and checks whether it is a vowel or a consonant using a switch statement.

#include<stdio.h>
int main()
{
  char a;
  printf("Enter a alphabate : ");
  scanf("%c",&a);
  switch(a)
  {
    case 'a':printf("VOWEL");
    break;
    case 'A':printf("VOWEL");
    break;
    case 'e':printf("VOWEL");
    break;
    case 'E':printf("VOWEL");
    break;
    case 'i':printf("VOWEL");
    break;
    case 'I':printf("VOWEL");
    break;
    case 'o':printf("VOWEL");
    break;
    case 'O':printf("VOWEL");
    break;
    case 'u':printf("VOWEL");
    break;
    case 'U':printf("VOWEL");
    break;
    default:printf("CONSONANT");
    break;
  }
  return 0;
}