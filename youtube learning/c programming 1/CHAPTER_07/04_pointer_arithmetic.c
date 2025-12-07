#include <stdio.h>

int main(){
  int a = 50;
  int* a1 = &a;
  printf("The address of a is %u\n", a1);
  a1++;
  printf("The address of a is %u\n", a1);

  char b = 'i';
  char *a2 = &b;
  printf("The address of a is %u\n", a2);
  a2++;
  printf("The address of a is %u\n", a2);
  return 0;
}