/*
38.	Read until -1 and compute average
Write a C program that repeatedly reads integers from the user until -1 is entered, then prints the average of all numbers (excluding -1) using a loop.
*/

#include <stdio.h>

int main()
{
  int a[50];
  float count = 0, sum = 0;
  for (int i = 0; i < 50; i++)
  {
    printf("Enter number: ");
    scanf("%d", &a[i]);
    if (a[i] == -1)
      break;
    count++;
    sum += a[i];
  }
  float avg = sum / count;
  printf("TOTAL NUMBERS = %.0f\n", count);
  printf("AVERAGE = %.2f", avg);
  return 0;
}

// OUTPUT:
/*
Enter number: 5
Enter number: 5
Enter number: 5
Enter number: 5
Enter number: 5
Enter number: 5
Enter number: 6
Enter number: 6
Enter number: 6
Enter number: 6
Enter number: 7
Enter number: 7
Enter number: 9
Enter number: 9
Enter number: 9
Enter number: 8
Enter number: 8
Enter number: 9
Enter number: -1
TOTAL NUMBERS = 18
AVERAGE = 6.67
*/