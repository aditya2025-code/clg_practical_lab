//write a program in c to display arihmetic operation between two number

#include <stdio.h>

int main()
{
  float a, b, addi, sub, mul, divi, madule;

  printf("Enter the frist number ");
  scanf("%f", &a);
  printf("Enter the second number ");
  scanf("%f", &b);

  addi = a + b;
  sub = a - b;
  mul = a * b;
  divi = a / b;

  int a1 = (int)a;
  int b1 = (int)b;

  madule = a1 % b1;

  printf("%f and %f addition is %.2f,  \n subtruction is %.2f,  \n multification is %.2f,  \n division is %.2f,  \n madule is %.2f \n", a, b, addi, sub, mul, divi, madule);
  return 0;
}