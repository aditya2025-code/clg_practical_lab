// Write a program to find the string length:
#include <stdio.h>

int main()
{
  int i = 0, count = 0;
  char name[20];
  printf("Enter a Name: ");
  gets(name);
  while (name[i] != '\0')
  {
    count++;
    i++;
  }
  printf("Length = %d", count);
  return 0;
}
// OUTPUT:
/*
Enter a Name: Hello programmers
Length = 17
*/