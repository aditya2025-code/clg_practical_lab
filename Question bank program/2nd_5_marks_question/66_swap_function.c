// 66. Write a function swap() to swap two integers using pointers (call by reference).
#include <stdio.h>
void swap(int x, int y)
{
  int swap;
  swap = x;
  x = y;
  y = swap;
  printf("after swaping \nA = %d\nB = %d", x, y);
}
int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("A = %d\nB = %d\n", a, b);
  swap(a, b);
  return 0;
}
// OUTPUT:
/*
Enter two numbers: 10 20
A = 10
B = 20
after swaping
A = 20
B = 10
*/