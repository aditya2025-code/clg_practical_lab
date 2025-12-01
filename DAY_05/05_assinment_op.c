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
//OUTPUT:
/*
Enter a and b value : 100 10
The value of a is 100
a+=b is 110
a-=b is 100
a*=b is 1000
a/=b is 100
a%=b is 0
The value of a is 0
*/