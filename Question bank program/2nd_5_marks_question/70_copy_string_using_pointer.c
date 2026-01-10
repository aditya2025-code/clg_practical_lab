// 70. Write a C program to copy one string to another using pointers (no strcpy).

#include <stdio.h>
int main()
{
  char ch[100], ch1[100];
  char *ptr1, *ptr2;
  printf("Enter the string: ");
  scanf("%[^\n]%*c", ch);
  ptr1 = &ch[0];
  ptr2 = &ch1[0];
  for (int i = 0; ch[i] != '\0'; i++)
  {
    *ptr2 = *(ptr1 + i);
    *ptr2++;
  }
  *ptr2 = '\0';
  printf("Copied string = %s", ch1);
  return 0;
}
// OUTPUT:
/*
Enter the string: Aditya Das
Copied string = Aditya Das
*/