// write a program in to read an array of 10 integers and then count the total number of odd and even numbers :

#include <stdio.h>
int main()
{
  int i, odd = 0, even = 0, a[10];
  printf("Enter the integers number : \n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  printf("Even = %d\nOdd = %d", even, odd);
  return 0;
}
//OUTPUT:
/*
Enter the integers number : 
1 2 3 4 5 6 7 8 9 10
Even = 5
Odd = 5
*/