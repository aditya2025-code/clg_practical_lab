//Write a C program that takes an integer and determines whether it is even or odd using a switch statement.

#include <stdio.h>

int main(){
  int a,b;
  printf("Enter a number: ");
  scanf("%d",&a);
  b = a % 2;
  switch(b)
  {
    case 0: printf("Even Number");
    break;
    case 1: printf("Odd Number");
    break;
  }
  return 0;
}