/*
12.	Print all even numbers between two numbers
Write a C program to input two integers low and high and print all even numbers between them using a loop.
*/
#include <stdio.h>

int main()
{
  int n1, n2;
  printf("Enter the Range(ex:10 100): ");
  scanf("%d %d", &n1, &n2);
  printf("Even Number from %d to %d is",n1,n2);
  for (; n1 <= n2; n1++)
  {
    if (n1 % 2 == 0)
      printf(" %d;", n1);
  }
  return 0;
}
// OUTPUT:
/*
Enter the Range(ex:10 100): 1 99
Even Number from 1 to 99 is 2; 4; 6; 8; 10; 12; 14; 16; 18; 20; 22; 24; 26; 28; 30; 32; 34; 36; 38; 40; 42; 44; 46; 48; 50; 52; 54; 56; 58; 60; 62; 64; 66; 68; 70; 72; 74; 76; 78; 80; 82; 84; 86; 88; 90; 92; 94; 96; 98;
*/