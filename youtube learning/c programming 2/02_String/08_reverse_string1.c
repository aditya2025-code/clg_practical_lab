// write a program to reverse a string:
#include <stdio.h>
#include <string.h>
void main()
{
  char ch, a[20];
  int length;
  printf("Enter a name to reverse: ");
  gets(a);
  length = strlen(a);
  for (int i = 0; i <= (length / 2); i++)
  {
    ch = a[i];
    a[i] = a[length - 1 - i];
    a[length - 1 - i] = ch;
  }
  printf("Reverse = %s", a);
}
//OUTPUT:
/*
Enter a name to reverse: Aditya Das
Reverse = saD yatidA
*/