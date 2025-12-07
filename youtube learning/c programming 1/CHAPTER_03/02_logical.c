#include <stdio.h>

int main(){
  int a , b ;
  printf("Enter 0 or 1\n");
  scanf("%d", &a);
  printf("Again enter 0 or 1\n");
  scanf("%d", &b);
  printf("The value of AND oparetor is %d\n", a&&b);
  printf("The value of OR oparetor is %d\n", a||b);
  printf("The value of not(a) and not(b) is %d and %d\n", !a, !b);

  if( a && b){
    printf("This is true\n");
  }
  if(a){
    if(b){
      printf("Both are ture");
    }
  }
  else{
    printf("Both are not true");
  }
  return 0;
}