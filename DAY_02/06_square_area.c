//Write a program in C to calculate area of a square.

#include <stdio.h>

int main()
{
  int length, area;

  printf("Enter the side length of a Square ");
  scanf("%d", &length);

  area = length * length;

  printf("Area of the square is %d", area);
  return 0;
}
//OUTPUT:
/*
Enter the side length of a Square 6
Area of the square is 36
*/