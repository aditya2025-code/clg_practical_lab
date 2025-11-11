//Write a C program to create a simple calculator using a switch statement.

#include<stdio.h>
int main()
{
  float x,y;
  char a;
  printf("Enter number then oparatpor then number : ");
  scanf("%f %c %f",&x,&a,&y);
  switch (a)
  {
    case '+':printf("%.2f %c %.2f = %.2f",x,a,y,x+y);
    break;
    case '-':printf("%.2f %c %.2f = %.2f",x,a,y,x-y);
    break;
    case '*':printf("%.2f %c %.2f = %.2f",x,a,y,x*y);
    break;
    case '/':printf("%.2f %c %.2f = %.2f",x,a,y,x/y);
    break;
    default:printf("Only use this kind of oparator (+,-,*,/)");
  }
  return 0;
}