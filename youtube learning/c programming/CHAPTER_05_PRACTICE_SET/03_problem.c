#include <stdio.h>

int fibonaci(int);

int fibonaci(int n) {
  if (n == 1 || n == 2)
  {
    return (n-1);
  }
  return fibonaci(n-1)+fibonaci(n-2);
}

int main(){
  int a = 5;
  printf("The fibonaci of %d is %d", a , fibonaci(a));
  return 0;
}