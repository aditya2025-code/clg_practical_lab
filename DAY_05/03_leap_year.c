//Write a program in c to check year is leap year or not:
#include<stdio.h>
void main(){
  int a;
  printf("Enter a year : ");
  scanf("%d",&a);
  ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))?printf("%d year is a leap year",a):printf("%d year is not leap year",a);
}
//OUTPUT:
/*
Enter a year : 200
200 year is not leap year
*/