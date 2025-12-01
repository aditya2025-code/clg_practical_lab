/* Write a program in c to display the sum and average of 5 student marks using array:*/

#include <stdio.h>
int main()
{
  int i, sum = 0, marks[5];
  float avg;
  for (i = 0; i < 5; i++)
  {
    printf("Enter the marks at index %d = ",i);
    scanf("%d", &marks[i]);
  }
  for (i = 0; i < 5; i++)
  {
    sum = sum + marks[i];
  }
  printf("\nThe sum of total number is %d", sum);
  avg = sum / 5;
  printf("\nThe average marks is %.2f", avg);
  return 0;
}

//OUTPUT:
/* 
Enter the marks at index 0 = 80
Enter the marks at index 1 = 92
Enter the marks at index 2 = 97
Enter the marks at index 3 = 86
Enter the marks at index 4 = 90

The sum of total number is 445
The average marks is 89.00
*/