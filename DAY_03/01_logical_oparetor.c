//Write a program in c to display logical operator between two variable, analyse with expression

#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter the numbers ");
  scanf("%d %d", &a, &b);

  printf("%d && %d = %d(for condition)\n", a > b, a != b, a > b && a != b);
  printf("%d && %d = %d(for expression)\n", a, b, a && b);
  printf("%d || %d = %d(for condition)\n", a >= b, a <= b, a >= b || a <= b);
  printf("%d || %d = %d(for expression)\n", a, b, a || b);
  printf("(for condition) ! %d==%d = %d\n", a, b, !(a == b));
  printf("(for expression) ! %d = %d", b, !b);
  return 0;
}
//OUTPUT:
/*
Enter the numbers 50 20
1 && 1 = 1(for condition)
50 && 20 = 1(for expression)
1 || 0 = 1(for condition)
50 || 20 = 1(for expression)
(for condition) ! 50==20 = 1
(for expression) ! 20 = 0
*/