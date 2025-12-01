//Write a program in C to calculate Celsius to Fahrenheite

#include <stdio.h>

int main()
{
  float c, f;

  printf("Enter the tempreture in celsius ");
  scanf("%f", &c);

  f = ((9 * c) + 160) / 5;

  printf("The tempreture of %.2f celsius to ferhenhite is %.2f", c, f);

  return 0;
}
//OUTPUT:
/*
Enter the tempreture in celsius 32
The tempreture of 32.00 celsius to ferhenhite is 89.60
*/