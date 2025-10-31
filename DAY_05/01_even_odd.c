//Write a program in c to calculate number is even or odd using ternary oparator:
#include<stdio.h>
void main(){
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  (a % 2 == 0)?printf("%d is an Even number",a):printf("%d is an Odd number",a);
}