#include<stdio.h>
void main()
{
  int a =10;
  int *p = &a;
  printf("*p = %u\n",*p);
  printf("p = %u\n",p);
  printf("&a = %u\n",&a);
  printf("&p = %u\n",&p);
  char b = 'A';
  char *p1 = &b;
  printf("*p1 = %u\n",*p1);
  printf("p1 = %u\n",p1);
  printf("&b = %u\n",&b);
  printf("&p1 = %u\n",&p1);


}