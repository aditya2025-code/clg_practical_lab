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
  printf("The final value of a is %d",a);
  return 0;
}
//OUTPUT:
/*
Enter a number : 50
The value of a is 50
The value of a++ is 50
The value of a is 51
The value of ++a is 52
The value of a is 52
The value of a-- is 52
The value of a is 51
The value of --a is 50
The final value of a is 50
*/