#include<stdio.h>

int returning_5(int*);

int returning_5(int* ptr) {
    printf("The value of ptr is %u\n",ptr);
    printf("The value at ptr is %d\n",*ptr);    
  return 5;
}

int main()
{
  int i = 10;
  int* i1 = &i;
  printf("The address of i is %u\n", &i);
  returning_5(i1);
  return 0; 
}

