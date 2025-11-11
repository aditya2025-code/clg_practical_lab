//Write a program that takes a number (1–7) as input and prints the corresponding day of the week using switch statement.

#include<stdio.h>
int main()
{
  int a;
  printf("Enter number between (1-7) : ");
  scanf("%d",&a);
  switch(a)
  {
    case 1:printf("Monday");
    break;
    case 2:printf("Tuesday");
    break;
    case 3:printf("Wednesday");
    break;
    case 4:printf("Thursday");
    break;
    case 5:printf("friday");
    break;
    case 6:printf("Saturday");
    break;
    case 7:printf("Sunday");
    break;
    default:printf("Only enter between (1-7)");
  }
  return 0;
}