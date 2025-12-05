// Write a program to find the string length using strlen function:
#include <stdio.h>
#include <string.h>
// For using strlen fuction we need to use string.header file
int main()
{
  int count;
  char name[30];
  printf("Enter a Name: ");
  gets(name);
  count = strlen(name);
  printf("The length = %d", count);
  return 0;
}
// OUTPUT:
/*
Enter a Name: Aditya das
The length = 10
*/