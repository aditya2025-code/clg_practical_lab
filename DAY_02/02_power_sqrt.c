//write a program in c to calculate power and square root

#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, p, s_a, s_b;

  printf("Enter the base and exponent ");
  scanf("%lf %lf", &a, &b);

  p = pow(a, b);
  s_a = sqrt(a);
  s_b = sqrt(b);

  printf("The power of %lf and %lf is %lf,\nThe square root of %lf is %lf,\nThe square root of %lf is %lf", a, b, p, a, s_a, b, s_b);

  return 0;
}

