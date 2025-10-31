#include<stdio.h>
int main()
{
  int a;
  float b;
  char c;
  printf("Enter the character ");
  scanf("%c",&c); //use a space before %c because char is 1 byte
  printf("Enter the integer number ");
  scanf("%d",&a);
  printf("Enter the float number ");
  scanf("%f",&b);
  printf("The character is %c\n",c);
  printf("The integer number is %d\n",a);
  printf("The float number is %.2f",b);
  return 0;
}
