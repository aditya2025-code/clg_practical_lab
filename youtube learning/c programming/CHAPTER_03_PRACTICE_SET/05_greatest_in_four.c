#include<stdio.h>
void main(){
  int a = 1000, b = 0200, c = 105, d =30;
  if(a>b && a>c && a>d)
  printf("a is the greatest");
  else if(b>a && b>c && b>d)
  printf("b is the greatest");
  else if(c>a && c>b && c>d)
  printf("c is the greatest");
  else
  printf("d is the greatest");
}