#include <stdio.h>

int sum(int, int); // function prototype

int sum(int x, int y)
{
  printf("The sum is %d\n", x + y);
  return x + y;
} // function definition

int main()
{
  sum(1, 1);
  sum(25, 25);
  int a = 5, b = 6;
  sum(a, b);
  return 0;
}
