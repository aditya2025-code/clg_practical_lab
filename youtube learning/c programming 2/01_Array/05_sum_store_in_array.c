// Write a program in c to read two array size of 5 and store sum of the array into third array:

#include <stdio.h>
int main()
{
  int i, a1[5], a2[5], sum[5];
  printf("First enter first array then next array :\n");
  for (i = 0; i < 5; i++)
    scanf("%d", &a1[i]);
  for (i = 0; i < 5; i++)
    scanf("%d", &a2[i]);
  printf("Sum array = ");
  for (i = 0; i < 5; i++)
  {
    sum[i] = a1[i] + a2[i];
    printf("%d ", sum[i]);
  }
  return 0;
}
//OUTPUT:
/*
First enter first array then next array :
1 3 5 7 9
2 4 6 8 10
Sum array = 3 7 11 15 19 
*/