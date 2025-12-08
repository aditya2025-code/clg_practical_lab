// Write a program in c to convert a string lower toUPPER case using strupr function :
#include <stdio.h>
#include <string.h>
int main()
{
  char a[20];
  printf("Enter anything in lower case:");
  gets(a);
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] >= 'a' && a[i] <= 'z')
      a[i] = a[i] - 32;
  }
  printf("Upper case = %s", a);
  return 0;
}
// OUTPUT:
/*
Enter anything in lower case:cute kitty
Upper case = CUTE KITTY
*/