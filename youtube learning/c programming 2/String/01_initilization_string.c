#include <stdio.h>

int main()
{
  char a[11] = {"I'm Aditya"};
  // char b[30];
  char c[30];
  printf("%s", a);
  // printf("\nEnter name: ");
  // scanf("%s",b);
  printf("\nAgain enter anything: ");
  gets(c);
  // printf("%s",b);
  puts(c);
  return 0;
}