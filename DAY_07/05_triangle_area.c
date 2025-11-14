// write a program in c to calculate area of a triangle using switch statement :

#include <stdio.h>
#include <math.h>

void main()
{
  int a, b, c;
  float area, s;

  printf("Enter 3 side : ");
  scanf("%d %d %d", &a, &b, &c);

  switch (a == b && a == c)
  {
  case 1:
    area = (sqrt(3) / 4) * pow(a, 2);
    printf("The area of Equilateral triangle is %.2f", area);
    break;

  case 0:
    switch ((a == b) || (b == c) || (a == c))
    {
    case 1:
      s = (a + b + c) / 2.0;
      area = sqrt(s * (s - a) * (s - b) * (s - c));
      printf("The area of Isosceles triangle is %.2f", area);
      break;

    case 0:
      s = (a + b + c) / 2.0;
      area = sqrt(s * (s - a) * (s - b) * (s - c));
      printf("The area of Scalene triangle is %.2f", area);
      break;
    }
    break;
  }
}
