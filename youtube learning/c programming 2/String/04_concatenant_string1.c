// write a program to concatenant two string:
#include <stdio.h>
#include <string.h>
void main()
{
  int i, j;
  char a[20], b[10];
  printf("Enter the first name: ");
  gets(a);
  printf("Enter the second name: ");
  gets(b);
  for (i = strlen(a), j = 0; j <= strlen(b); j++, i++)
  {
    a[i] = b[j];
  }
  printf("Concatenant: %s", a);
}
// OUTPUT:
/*
Enter the first name: Aditya_
Enter the second name: Das
Concatenant: Aditya_Das
*/