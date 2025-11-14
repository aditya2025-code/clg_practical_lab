// Write a program in c to display simple interest and compund interest depends on user choise using switch statement:

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
  switch(choise)
  {
    case 1 : si = (p * r * t) / 100;
    printf("Simple interest is %2.f", si);
    break;
    case 2 : ci = (p * pow((1 + r / 100), t)) - p;
    printf("Compound inerest is %2.f", ci);
    break;
    default: printf("Please choise 1 or 2");
    break;
  }
  return 0;
}