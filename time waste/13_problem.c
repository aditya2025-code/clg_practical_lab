#include <stdio.h>

int main(){
  int a =7,b =19;
  int c=((b++)-(a++-++b))*(b++);
  /*
   c=((b++)-(a++-++b))*(b++)  a=7,b=22
    = ((19)-(7-21))*(21)
    = (19+14)*(21)
    = (33)*(21)
    = 693
  */
  printf("Result= %i",c);
  return 0;
}