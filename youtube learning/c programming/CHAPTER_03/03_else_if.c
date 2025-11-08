#include <stdio.h>

int main(){
  int age = 200;
  if(age>60, age<100){
    printf("You are a old man");
  }
  else if (age>50, age<100){
    printf("You are a family man");
  }
  else if(age>=40, age<100){
    printf("You'r in middle age");
  }
  else{
    printf("You'r not a human\n");
    printf("You'r a Aline :)");
  }
  return 0;
}