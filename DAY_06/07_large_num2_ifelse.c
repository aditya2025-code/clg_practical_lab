// Write a program in c to check large number among 3 number using if-else ladder:
#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a, &b, &c);
  if  (a>b && a>c){
    printf("%d is the large number",a);
  }
  else if(b>a && b>c){
    printf("%d is the large number",b);
  }
  else  {
    printf("%d is the large number",c);
  }
  return 0;
}