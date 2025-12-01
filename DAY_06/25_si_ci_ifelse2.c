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
    si = (p * r * t) / 100;
    printf("Simple interest is %.2f", si);
  }
  else if (choise == 2)
  {
    ci = (p * pow((1 + r / 100), t)) - p;
    printf("Compound inerest is %.2f", ci);
  }
  else
  {
    printf("Please choise 1 or 2");
  }
  return 0;
}
//OUTPUT:
/*
Enter Principal, Rate and Time: 15000 8 10
Enter 1 for simple interest
Enter 2 for compound interest
1
Simple interest is 12000.00
*/