//Write a program in c to check large number among 3 number using nested ternary:
#include <stdio.h>

int main(){
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a, &b, &c);
  (a>b)?(a>c)?printf("%d is Large number",a):printf("%d is large number",c):(b>c)?printf("%d is large number",b):printf("%d is large number",c);
  return 0;
}