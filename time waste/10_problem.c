//Write a program that reads a character and checks whether it is a vowel or a consonant using a switch statement.

#include<stdio.h>
int main()
{
  char a;
  printf("Enter a alphabate : ");
  scanf("%c",&a);
  switch(a)
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
    case 'U':printf("VOWEL");
    break;
    default:printf("CONSONANT");
    break;
  }
  return 0;
}