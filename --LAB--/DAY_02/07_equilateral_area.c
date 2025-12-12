//Write a program in C to calculate area of equilateral triangle.

#include <stdio.h>
#include <math.h>

int main()
{

  float length, area;

  printf("Enter the length ");
  scanf("%f", &length);

  area = (sqrt(3) / 4) * pow(length, 2);

  printf("The area of Equilateral triangle is %.2f", area);

  return 0;
}
//OUTPUT:
/*
Enter the length 5
The area of Equilateral triangle is 10.83
*/