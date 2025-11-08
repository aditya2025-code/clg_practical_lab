#include <stdio.h>

int main(){
  int r = 5;
  int h = 2;
  printf("The area of a circul with radius %d is %.2f\n",r, 3.14*r*r);
  printf("The volume of a cylinder with radius %d and hight %d is %.2f",r,h, 3.14*r*r*h);

  return 0;
}