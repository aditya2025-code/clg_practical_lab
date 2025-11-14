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
    case '%':
    int x1 = (int)x;
    int y1 = (int)y;
    printf("%d %c %d = %d",x1,a,y1,x1 % y1 );
    break;
    default:printf("Only use this kind of oparator (+,-,*,/,%)");
  }
  return 0;
}