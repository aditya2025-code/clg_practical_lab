#include <stdio.h>
void swap(int* , int*);

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
  int x = 1, y = 2;
  swap(&x ,&y);
  printf("The value of x is %d and y is %d",x,y);
  return 0;
}