//Write a program in c to check number is zero or non-zero using ternary oparator:
#include<stdio.h>
void main(){
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  (a == 0)?printf("%d is Zero",a):printf("%d is non-Zero",a);
}