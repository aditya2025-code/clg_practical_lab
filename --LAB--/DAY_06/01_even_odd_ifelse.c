// Write a program in c to calculate number is even or odd using if else:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  if (a % 2 == 0)
  {
    printf("%d is an Even number", a);
  }
  else
  {
    printf("%d is an odd number", a);
  }
}
//OUTPUT:
/*
Enter a number : 69
69 is an odd number
*/