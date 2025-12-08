// Write a program in c to convert a string lower toUPPER case using strupr function :
#include <stdio.h>
#include <string.h>
int main()
{
  char a[20];
  printf("Enter anything in lower case:");
  gets(a);
  strupr(a);
  printf("Upper case = %s", a);
  return 0;
}
// OUTPUT:
/*
Enter anything in lower case:adi tHe KillEr
Upper case = ADI THE KILLER
*/