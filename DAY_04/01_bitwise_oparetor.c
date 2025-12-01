//Write a program in to display bitwise oparator between two variable:
#include <stdio.h>

int main(){
  int a , b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);
  printf("%d & %d = %d\n",a,b,a&b);
  printf("%d | %d = %d\n",a,b,a|b);
  printf("~ %d = %d\n",a,~a);
  printf("~ %d = %d\n",b,~b);
  printf("%d ^ %d = %d\n",a,b,a^b);
  printf("%d << %d = %d\n",a,b,a<<b);
  printf("%d >> %d = %d",a,b,a>>b);
  return 0;
}
//OUTPUT:
/*
Enter two number : 7 5
7 & 5 = 5
7 | 5 = 7
~ 7 = -8
~ 5 = -6
7 ^ 5 = 2
7 << 5 = 224
7 >> 5 = 0
*/