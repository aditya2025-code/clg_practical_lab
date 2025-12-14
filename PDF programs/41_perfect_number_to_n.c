/*
41.	Print all perfect numbers in a range
Using loops (nested), print all perfect numbers between 1 and n.
*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter Range: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int sum = 0;
    for (int j = 1; j < i; j++)
    {
      if (i % j == 0)
        sum += j;
    }
    if (sum == i)
      printf("%d ", sum);
  }
  return 0;
}
// OUTPUT:
/*
Enter Range: 10000
6 28 496 8128
*/