#include <stdio.h>
float c2f(float);

float c2f(float c) {
  return ((9*c)/5)+32;
}
int main(){
  float c = 35;
  printf("The %f celsius to ferhenhite is %.2f",c,c2f(c));
  return 0;
}