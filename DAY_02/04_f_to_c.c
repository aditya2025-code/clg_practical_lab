//Write a program in C to calculate fahrenheit to Celsius.

#include <stdio.h>

int main()
{
  float c, f;

  printf("Enter the tempreture in fehrenheit ");
  scanf("%f", &f);

  c = (5 * (f - 32)) / 9;

  printf("The tempreture of %.2f fehrenheit to celsius is %.2f", f, c);

  return 0;
}
//OUTPUT:
/*
Enter the tempreture in fehrenheit 108
The tempreture of 108.00 fehrenheit to celsius is 42.22
*/