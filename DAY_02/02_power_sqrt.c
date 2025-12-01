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
//OUTPUT:
/*
Enter the base and exponent 50 5
The power of 50.000000 and 5.000000 is 312500000.000000,
The square root of 50.000000 is 7.071068,
The square root of 5.000000 is 2.236068
*/