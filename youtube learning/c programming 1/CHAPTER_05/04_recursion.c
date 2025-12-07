#include <stdio.h>

int factorial(int n);

int factorial(int n) {
  if( n == 0 || n == 1){
  return 1;
  }
  return n* factorial(n-1);
}

int main(){
    int a = 3;
    printf("The factorial of %d is %d", a, factorial(a));  
  return 0;
}
