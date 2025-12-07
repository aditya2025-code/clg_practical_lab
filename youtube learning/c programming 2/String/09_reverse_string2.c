// write a program to reverse a string using strrev function :
#include <stdio.h>
#include <string.h>
void main()
{
  char a[20];
  printf("Enter a name to reverse: ");
  gets(a);
  strrev(a);
  printf("Reverse = %s", a);
}
// OUTPUT:
/*
Enter a name to reverse: Aditya daS
Reverse = Sad aytidA
*/