#include<stdio.h>

int main() {
  int i = 5;
  int* j = &i;
  int** k = &j;
  int*** a = &k;
  printf("The value of i is %d\n",i);
  printf("The value of j is %d\n",*j);
  printf("The value of k is %d\n",**k);
  printf("The value of a is %d\n",***a);
  return 0;
}