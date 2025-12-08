#include<stdio.h>
void main()
{
  int a[5] ={0,1,2,3,4};
  int *p = &a[0];
  p = p+3;
  printf("*p = %u\n",*p);
  p = p-2;
  printf("*p = %u\n",*p);
  
}