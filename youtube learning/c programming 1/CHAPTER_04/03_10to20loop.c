#include <stdio.h>

int main(){
  int a=0;
  while(a<20) {
    if(a>=10){
      printf("The value of a is %d\n",a);
    }
    a++;
  }
  return 0;
}