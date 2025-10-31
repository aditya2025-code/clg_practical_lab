//Write a program in c to check minimum number among 3 number using nested ternary:
#include <stdio.h>

int main(){
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a, &b, &c);
  (a<b)?(a<c)?printf("%d is smallest number",a):printf("%d is smallest number",c):(b<c)?printf("%d is smallest number",b):printf("%d is smallest number",c);
  return 0;
}