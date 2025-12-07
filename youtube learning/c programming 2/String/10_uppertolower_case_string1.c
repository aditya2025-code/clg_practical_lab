// Write a program in c to convert a string UPPER to lower case:
#include <stdio.h>
void main()
{
  char a[20];
  printf("Enter anything in upper case:");
  gets(a);
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] >= 'A' && a[i] <= 'Z')
      a[i] = a[i] + 32;
  }
  printf("Lower case = %s", a);
}
// OUTPUT:
/*
Enter anything in upper case:AdItYa DaS
Lower case = aditya das
*/