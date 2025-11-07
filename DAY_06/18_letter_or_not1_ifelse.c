//Write a program in c to check given character is letter or not using if-else:

#include <stdio.h>

int main(){
  char a;
  printf("Enter a character: ");
  scanf("%c",&a);
  if((a >= 'a' && a<= 'z') ||(a >= 'A' && a <= 'Z'))
  {
    printf("%c is a letter",a);
  }
  else
  {
    printf("%c is not a letter",a);
  }
  return 0;
}