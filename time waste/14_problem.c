#include <stdio.h>

int main(){
  int a = 5,b = 9;
  int c =(a&b)+(a|b)+(a^b);
  /*
   c =(a&b)+(a|b)+(a^b) , 
   5 = 0101  }   |    { 0101 } |    { 0101 }
   9 = 1001  } & | OR { 1001 } |  ^ { 1001 }
   1 = 0001      | 13 = 1101   | 12 = 1100
    
   c = 1+13+12 = 26
  */
  printf("c = %d",c);
  return 0;
}