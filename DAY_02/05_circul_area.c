//Write a program in C to calculate area of a circle.

#include <stdio.h>

int main()
{
  float r, area;

  printf("Enter the circul redius ");
  scanf("%f", &r);

  area = 3.141 * r * r;

  printf("The area of circul is %.2f", area);

  return 0;
}