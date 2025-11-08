#include <stdio.h>

int main(){
  int i = 50;
  int* j = &i;
  printf("The address of i is %p\n", &i);
  printf("The address of j is %p\n", j);
  printf("The address store by j is %d", *(&i));
  return 0;
}