// Q31. A sequence is read until sentinel -1. Write a C program to find max, min, sum, average ensuring the sentinel is not included.
#include <stdio.h>

int main()
{

  int a, sum = 0, count = 0, avg, max = 0, min = 999999999;
  do
  {
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a == -1)
      break;
    if(max < a)
    max = a;
    if(min > a)
    min = a;
    sum += a;
    count++;
  } while (a != -1);
  avg = sum / count;
  printf("Maximum number = %d\nMinimum number = %d\nSum = %d\nAverage = %d", max,min,sum,avg);
  return 0;
}

// OUTPUT:
/*
Enter the number: 80
Enter the number: 90
Enter the number: 80
Enter the number: 70
Enter the number: 70
Enter the number: -1
Maximum number = 90
Minimum number = 70
Sum = 390
Average = 78
*/