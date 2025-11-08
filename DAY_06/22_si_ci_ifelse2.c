// Write a program in c to display simple interest and compund interest depends on user choise using if else ladder:

#include <stdio.h>
#include <math.h>
int main()
{
  float p, t, r, ci, si;
  int choise;
  printf("Enter Principal, Rate and Time: ");
  scanf("%f %f %f", &p, &r, &t);
  printf("Enter 1 for simple interest\nEnter 2 for compound interest\n");
  scanf("%d", &choise);
  if (choise == 1)
  {
    ci = (p * r * t) / 100;
    printf("Simple interest is %2.f", ci);
  }
  else if (choise == 2)
  {
    si = (p * pow((1 + r / 100), t)) - p;
    printf("Compound inerest is %2.f", si);
  }
  else
  {
    printf("Please choise 1 or 2");
  }
  return 0;
}