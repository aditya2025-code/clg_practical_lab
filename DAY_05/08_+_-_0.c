//Write a program in c to check number in positive or negative or zero using nested ternary oparator:
#include <stdio.h>

int main(){
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  (a>0)?printf("%d is non-zero",a):(a == 0)?printf("%d is Zero",a):printf("%d is non-zero");
  return 0;
}