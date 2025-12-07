#include<stdio.h>
int main()
{
  int i = 10;
  int* i1 = &i;
  printf("The address of i is %u\n", &i);
  printf("The value of i1 is %d", *i1);
  return 0; 
}

