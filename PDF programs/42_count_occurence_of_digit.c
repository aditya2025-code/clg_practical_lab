/*
42.	Count the occurrence of each digit in a number
Write a C program that uses loops to count how many times each digit (0–9) appears in a given integer.
*/
#include <stdio.h>

int main()
{
  long int n;
  int a;
  int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
  printf("Enter a digit: ");
  scanf("%ld", &n);
  while (n != 0)
  {
    a = (n % 10);
    if (a == 0)
      count0++;
    else if (a == 1)
      count1++;
    else if (a == 2)
      count2++;
    else if (a == 3)
      count3++;
    else if (a == 4)
      count4++;
    else if (a == 5)
      count5++;
    else if (a == 6)
      count6++;
    else if (a == 7)
      count7++;
    else if (a == 8)
      count8++;
    else if (a == 9)
      count9++;
    n /= 10;
  }
  printf("ZERO = %d\nONE = %d\nTWO = %d\nTHREE = %d\nFOUR = %d\nFIVE = %d\nSIX = %d\nSEVEN = %d\nEIGHT = %d\nNINE = %d", count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
  return 0;
}
//OUTPUT:
/*
Enter a digit: 741235
ZERO = 0
ONE = 1
TWO = 1
THREE = 1
FOUR = 1
FIVE = 1
SIX = 0
SEVEN = 1
EIGHT = 0
NINE = 0
*/