#include <stdio.h>

int main(){
  int a = 4 , b = 6, c= 0;
  if(a++>4 && ++b>6)
  c = a + b;
  else
  c = a - b;
  printf("a = %d, b =%d , c = %d",a,b,c);
  return 0;
}