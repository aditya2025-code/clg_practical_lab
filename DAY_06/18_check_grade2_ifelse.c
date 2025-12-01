// Write a program to check grade point best on five subject using if-else if ladder:

#include <stdio.h>

int main()
{
  float bio, eng, phy, ch, m, avg;
  char grade;

  printf("Enter the Biology , English , Physic , Chemestry and Math marks (side by side)\n");

  scanf("%f %f %f %f %f", &bio, &eng, &phy, &ch, &m);

  avg = (bio + eng + phy + ch + m) / 5.0;

  int avg1 = (int)avg;

  printf("Your average is %d\n", avg1);

  if (avg1 >= 90 && avg1 <= 100)
  {
    grade = 'O';
  }
  else if (avg1 >= 80 && avg1 <= 89)
  {
    grade = 'E';
  }
  else if (avg1 >= 70 && avg1 <= 79)
  {
    grade = 'A';
  }
  else if (avg1 >= 60 && avg1 <= 69)
  {
    grade = 'B';
  }
  else if (avg1 >= 50 && avg1 <= 59)
  {
    grade = 'C';
  }
  else if (avg1 >= 40 && avg1 <= 49)
  {
    grade = 'D';
  }
  else
  {
    grade = 'F';
  }
  printf("Your Grade = %c", grade);
  return 0;
}
//OUTPUT:
/*
Enter the Biology , English , Physic , Chemestry and Math marks (side by side)
60 80 66 83 99
Your average is 77
Your Grade = A
*/