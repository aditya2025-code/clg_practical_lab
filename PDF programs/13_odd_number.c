/*
13.	Print all odd numbers between two numbers
Similar to above, but print all odd numbers between low and high using a loop.
*/
#include <stdio.h>

int main()
{
  int n1, n2;
  printf("Enter the Range(ex:1 100): ");
  scanf("%d %d", &n1, &n2);
  printf("Odd Number from %d to %d is",n1,n2);
  for (; n1 <= n2; n1++)
  {
    if (n1 % 2 != 0)
      printf(" %d;", n1);
  }
  return 0;
}
// OUTPUT:
/*
Enter the Range(ex:1 100): 1 101
Odd Number from 1 to 101 is 1; 3; 5; 7; 9; 11; 13; 15; 17; 19; 21; 23; 25; 27; 29; 31; 33; 35; 37; 39; 41; 43; 45; 47; 49; 51; 53; 55; 57; 59; 61; 63; 65; 67; 69; 71; 73; 75; 77; 79; 81; 83; 85; 87; 89; 91; 93; 95; 97; 99; 101;
*/