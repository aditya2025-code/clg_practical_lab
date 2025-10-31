//Write a program in C to calculate area of isosceles triangle. 

#include <stdio.h>
#include <math.h>
int main()
{
  float length, length2, height, area;

  printf("Enter the equale side length ");
  scanf("%f", &length);
  printf("Enter the other side length ");
  scanf("%f", &length2);

  height = sqrt(pow(length, 2) - pow(length2 / 2, 2));
  area = 0.5 * length2 * height;

  printf("The height of Isosceles triangle is %.2f\n", height);
  printf("The area of Isosceles triangle is %.2f", area);

  return 0;
}