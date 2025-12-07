// write a program to concatenant two string using strcat function:
#include <stdio.h>
#include <string.h>
// we need string . header file for strcat function
void main()
{
  char a[20], b[10];
  printf("Enter the first name: ");
  gets(a);
  printf("Enter the second name: ");
  gets(b);
  strcat(a, b);
  printf("Concatenant: ");
  puts(a);
}
// OUTPUT:
/*
Enter the first name: Aditya
Enter the second name: Das
Concatenant: Aditya Das
*/