//Write a program in c to perform increment and decrement oparator:
#include<stdio.h>
int main(){
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  printf("The value of a is %d\n",a);
  printf("The value of a++ is %d\n",a++);
  printf("The value of a is %d\n",a);
  printf("The value of ++a is %d\n",++a);
  printf("The value of a is %d\n",a);
  printf("The value of a-- is %d\n",a--);
  printf("The value of a is %d\n",a);
  printf("The value of --a is %d\n",--a);
  printf("The value of a is %d",a);
  return 0;
}