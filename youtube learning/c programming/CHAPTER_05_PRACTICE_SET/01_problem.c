#include <stdio.h>
float average(float a,float b, float c);

float average(float a,float b,float c){
  return (a+b+c)/3.0;
} 
int main(){
  float x = 2.0, y = 3.0 , z = 6.0;
  printf("The average is %f", average(x,y,z));
  
  return 0;
}