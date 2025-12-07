#include <stdio.h>

int main(){
  int age;
  printf("Enter your age\n");
  scanf("%d", &age);
  if(age>20){
    printf("So your age is more than 20");
  }
  else{
    printf("your age not more than 20");
  }
  
  return 0;
}