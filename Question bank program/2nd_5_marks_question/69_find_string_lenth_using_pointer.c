// 69. Write a C program to find string length using pointers (do not use strlen).
#include <stdio.h>

int main()
{
  char ch[100];
  char *prt = &ch[0];
  int count = 0;
  printf("Enter a string: ");
  scanf("%[^\n]%*c", ch);
  for (int i = 0; ch[i] != '\0'; i++)
  {
    if (*(prt + i) != '\0')
      count++;
  }
  printf("String size is %d", count);
  return 0;
}