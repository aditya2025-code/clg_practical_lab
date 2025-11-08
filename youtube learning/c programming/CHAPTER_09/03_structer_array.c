#include <stdio.h>

struct employee
{
  int code;
  float salary;
  char name[10];
};

int main(){
  struct employee facebook[100];
  facebook[0].code = 01;
  facebook[49].code = 50;
  facebook[99].code = 100;

  printf("%d\n%d\n%d\n", facebook[0].code, facebook[49].code, facebook[99].code);

  struct employee adi= {001,10.11,"Aditya"};
  printf("%d\n%f\n%s",adi.code,adi.salary,adi.name);
  return 0;
}