#include<stdio.h>
int main(){
  int i = 10;
  printf("The value of i is %d\n",i);
  printf("The value of i is %d\n",i++);
  printf("The value of i is %d\n",i);
  printf("The value of i is %d\n",++i);

  int b = 10;
  printf("The value of b is %d\n",b);
  printf("The value of b is %d\n",b-=3);
  printf("The value of b is %d\n",b);
  printf("The value of b is %d\n",--b);

  return 0;
}