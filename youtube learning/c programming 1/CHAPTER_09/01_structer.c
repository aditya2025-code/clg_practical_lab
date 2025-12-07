#include <stdio.h>
#include<string.h>

struct employee
{
  int code;
  float salary;
  char name[10];
};

int main(){
  struct employee e1,e2;
  e1.code = 123;
  strcpy(e1.name,"Aditya");
  e1.salary = 200.00;
  printf("%d %s %f",e1.code,e1.name,e1.salary);
  return 0;
}