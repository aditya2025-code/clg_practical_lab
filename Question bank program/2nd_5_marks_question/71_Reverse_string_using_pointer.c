// 71. Write a C program to reverse a string using pointers.
#include <stdio.h>

int main()
{
  char ch[100], ch1[100];
  char *prt = &ch[0];
  char *prt1 = &ch1[0];
  int count = 0;
  printf("Enter a string: ");
  scanf("%[^\n]%*c", ch);
  for (int i = 0; ch[i] != '\0'; i++)
  {
    if (*(prt + i) != '\0')
      count++;
  }
  for (int i = count - 1; i >= 0; i--)
  {
    *prt1 = *(prt + i);
    *prt1++;
  }
  *prt1 = '\0';
  printf("Revrese = %s", ch1);
  return 0;
}
// OUTPUT:
/*
Enter a string: Aditya Das
Revrese = saD aytidA
*/