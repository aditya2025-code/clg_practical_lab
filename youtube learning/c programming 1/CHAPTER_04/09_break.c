#include <stdio.h>

int main(){
  for(int i=1; i < 15; i++)
  {
    printf("i value is %d\n",i);
    if(i==7)
    break;
  }
  return 0;
}