#include<stdio.h>
 int reference( int* , int*);

 int reference(int* a, int* b) {
          *a = 10, *b = 5;
          return *a + *b;
 }
 int main() {
    int x = 1,y = 10;
    printf("The sum is %d", reference(&x , &y));

  return 0;
 }