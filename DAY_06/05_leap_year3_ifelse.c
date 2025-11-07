// Write a program in c to check year is leap year or not using if-else ladder:
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a year : ");
  scanf("%d", &a);
  if(a % 400 == 0){
    printf("%d is leap Year",a);
  }
  else if(a % 100 == 0){
    printf("%d is not leap Year",a);
  }
  else if(a % 4 == 0){
    printf("%d is leap Year",a);
  }
  else{
    printf("%d is not leap Year",a);
  }
}