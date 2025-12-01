//write a program in c to calculate bitwise AND and bitwise OR between two variable 

#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter the numbers ");
  scanf("%d %d", &a, &b);

  printf("%d & %d = %u\n", a, b, a & b);
  printf("%d | %d = %u", a, b, a | b);
  return 0;
}
//OUTPUT:
/*
Enter the numbers 5 10
5 & 10 = 0
5 | 10 = 15
*/