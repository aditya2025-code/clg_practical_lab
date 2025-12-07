#include <stdio.h>

int main(){
  for(int i=1; i < 15; i++)
  {
    if(i==7)
    continue;
    printf("i value is %d\n",i);
  }
  return 0;
}