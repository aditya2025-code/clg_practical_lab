// write a program in c to sum of N number using for loop:
#include <stdio.h>
#include <windows.h>
void main()
{
  int i, n, a = 0;
  printf("Enter the Number: ");
  scanf("%d", &n);
  printf("1");
  for (i = 1; i <= n; i++)
  {
    a = a + i;
    if (i > 1)
    {
      printf("+%d", i);
      fflush(stdout);
      Sleep(400);
    }
  }
  printf(" = %d", a);
}