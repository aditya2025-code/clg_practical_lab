#include <stdio.h>

int* sum(int,int);

int* sum(int a, int b) {
        int s = a+b;
        int* ptr = &s;
        printf("The sum is %d\n",s);
        return ptr;
}

float* average(float,float);

float* average(float a, float b) {
        float ave = (a+b)/2.0 ;
        float* ptr= &ave;
        printf("The average is %f\n",ave);
        return ptr;
}

int main(){
  int x = 5, y =25;
  int* ptr1;
  float* ptr2;
  ptr1 = sum(x,y);
  ptr2 = average(x,y);
  printf("The address of sum is %u and average is %u",ptr1 ,ptr2);
  return 0;
}