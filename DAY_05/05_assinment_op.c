//Write a program in c to perform assinment oparator:
#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter a and b value : ");
  scanf("%d %d", &a, &b);
  printf("The value of a is %d\n", a);
  printf("a+=b is %d\n", a += b);
  printf("a-=b is %d\n", a -= b);
  printf("a*=b is %d\n", a *= b);
  printf("a/=b is %d\n", a /= b);
  printf("a%%=b is %d\n", a %= b);
  printf("The value of a is %d", a);
  return 0;
}