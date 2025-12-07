// Write a program in c to convert a string UPPER to lower case using strlwr function :
#include <stdio.h>
#include <string.h>
int main()
{
  char a[20];
  printf("Enter anything in upper case:");
  gets(a);
  strlwr(a);
  printf("Lower case = %s", a);
  return 0;
}
// OUTPUT:
/*
Enter anything in upper case:ADITYA DaS
Lower case = aditya das
*/